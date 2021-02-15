#include"include/instructionDecoderW65C02S.h"

W65C02S::Instruction W65C02S::InstructionDecoder::getInstruction()
{

	Byte maskedOpCode = INSTRUCTION_MASK & opCode;

	if (maskedOpCode == ROW0)
	{
		return determineROW0Instruction();
	}
	else if (maskedOpCode == ROW1)
	{
		return determineROW1Instruction();
	}
	else if (maskedOpCode == ROW2)
	{
		return determineROW2Instruction();
	}
	else if (maskedOpCode == ROW3)
	{
		return determineROW3Instruction();
	}
	else if (maskedOpCode == ROW4)
	{
		return determineROW4Instruction();
	}
	else if (maskedOpCode == ROW5)
	{
		return determineROW5Instruction();
	}
	else if (maskedOpCode == ROW6)
	{
		return determineROW6Instruction();
	}
	else if (maskedOpCode == ROW7)
	{
		return determineROW7Instruction();
	}
	else
	{
		throw 48;
	}
}

W65C02S::Instruction W65C02S::InstructionDecoder::determineROW0Instruction()
{
	return Instruction::LDA;
}

W65C02S::Instruction W65C02S::InstructionDecoder::determineROW1Instruction()
{
	return Instruction::LDA;
}

W65C02S::Instruction W65C02S::InstructionDecoder::determineROW2Instruction()
{
	return Instruction::LDA;
}

W65C02S::Instruction W65C02S::InstructionDecoder::determineROW3Instruction()
{
	return Instruction::LDA;
}

W65C02S::Instruction W65C02S::InstructionDecoder::determineROW4Instruction()
{
	return Instruction::LDA;
}

W65C02S::Instruction W65C02S::InstructionDecoder::determineROW5Instruction()
{
	return Instruction::LDA;
}

W65C02S::Instruction W65C02S::InstructionDecoder::determineROW6Instruction()
{
	return Instruction::LDA;
}

W65C02S::Instruction W65C02S::InstructionDecoder::determineROW7Instruction()
{
	return Instruction::LDA;
}

W65C02S::AddressingMode W65C02S::InstructionDecoder::getAddressingMode()
{
	return AddressingMode::Absolute;
}
