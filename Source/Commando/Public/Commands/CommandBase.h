/**
MIT License

Copyright (c) 2023 Younes Meziane

Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the "Software"), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in all
copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
SOFTWARE.
*/

#pragma once

#include "CoreMinimal.h"
#include "CommandStructs.h"
#include "UObject/NoExportTypes.h"

#include "CommandBase.generated.h"

/**
 * A command is an object that can be executed from a text value.
 * It can contain arguments that will be parsed from the string.
 */
UCLASS(Abstract, Blueprintable, ClassGroup = (Commando))
class COMMANDO_API UCommandBase : public UObject
{
	GENERATED_BODY()

public:
	
	/**
	 * Called to execute a command.
	 * @param Context The context that is being used to execute the command.
	 * @param OutErrorMessage On failure, the error message to return to the command handler.
	 * @returns True if the command ran successfully, false if an error occurred.
	 */
	UFUNCTION(BlueprintNativeEvent, Category = "Command Base", Meta = (ReturnDisplayName = "bSuccess", AutoCreateRefTerm = "OutErrorMessage"))
	bool ExecuteCommand(const FCommandContext& Context, FText& OutErrorMessage) const;

protected:

	/** The name of the command. Will be used as a display name and referred to that way for execution from a text value. */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Command Base")
	FName Name;

	/** Localized description of the command. */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Command Base")
	FText Description;

	/** Defines where this command should be executed. */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Command Base")
	ECommandExecutionStrategy ExecutionStrategy;
};
