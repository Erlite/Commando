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

#include "CommandStructs.generated.h"

/**
 * Defines where a command should be executed.
 */
UENUM(BlueprintType)
enum class ECommandExecutionStrategy : uint8
{
	// The command should be executed on the calling client's machine (or the server if executed by the server).
	Client,
	// The command should be executed on the server, regardless of the caller.
	Server,
	// The command should be executed on both the client and the server.
	Both
};

/**
 * The execution context of a command.
 * Contains data about who called the command and what is being used to run it.
 */
USTRUCT(BlueprintType)
struct COMMANDO_API FCommandContext
{
	GENERATED_BODY();

	/** The raw string that was used to parse the command and arguments from. */
	UPROPERTY(BlueprintReadOnly, Category = "Command Context")
	FString RawString;

	/** The name of the caller that instigated the command. */
	UPROPERTY(BlueprintReadOnly, Category = "Command Context")
	FName CallerName;

	/** The player that called the command, if any. */
	UPROPERTY(BlueprintReadOnly, Category = "Command Context")
	APlayerController* CallerObject;
};