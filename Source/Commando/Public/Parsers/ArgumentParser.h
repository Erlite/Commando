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
#include "UObject/NoExportTypes.h"

#include "ArgumentParser.generated.h"

// TODO: Instead of return value for parsed result, make function to store it until requested
// TODO: Probably store result in union between primitives/structs/objectref

/**
 * An argument parser is tasked with parsing a string argument into another type.
 * You can create custom parsers for your own types when needed.
 */
UCLASS(Abstract, Blueprintable, DefaultToInstanced, ClassGroup = (Commando))
class COMMANDO_API UArgumentParser : public UObject
{
	GENERATED_BODY()

public:

	

};
