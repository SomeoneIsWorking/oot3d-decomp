// OoT3D decomp @ 001cdb38  name=FUN_001cdb38  size=264

void FUN_001cdb38(int param_1,int param_2)

{
  short sVar1;
  undefined2 uVar2;
  int iVar3;
  uint in_fpscr;
  float fVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;

  iVar3 = FUN_0037571c(param_2);
  if (((iVar3 != 0) &&
      (*(short **)(&DAT_000022dc + param_2 + *(short *)(param_1 + 0xe88) * 4) != (short *)0x0)) &&
     (sVar1 = **(short **)(&DAT_000022dc + param_2 + *(short *)(param_1 + 0xe88) * 4),
     sVar1 == 3 || sVar1 == 5)) {
    FUN_00375bcc(param_1,DAT_001cdc40);
    fVar4 = (float)VectorSignedToFloat((int)*(short *)(*DAT_001cdc44 + 0x110),
                                       (byte)(in_fpscr >> 0x15) & 3);
    *(short *)(param_1 + 0xe86) = (short)(int)(DAT_001cdc48 / fVar4 + DAT_001cdc4c);
    param_2 = param_2 + *(short *)(param_1 + 0xe88) * 4;
    iVar3 = *(int *)(&DAT_000022dc + param_2);
    uVar6 = VectorSignedToFloat(*(undefined4 *)(iVar3 + 0xc),(byte)(in_fpscr >> 0x15) & 3);
    uVar7 = VectorSignedToFloat(*(undefined4 *)(iVar3 + 0x14),(byte)(in_fpscr >> 0x15) & 3);
    uVar5 = VectorSignedToFloat(*(undefined4 *)(iVar3 + 0x10),(byte)(in_fpscr >> 0x15) & 3);
    *(undefined4 *)(param_1 + 0x30) = uVar7;
    *(undefined4 *)(param_1 + 0x2c) = uVar5;
    *(undefined4 *)(param_1 + 0x28) = uVar6;
    uVar2 = *(undefined2 *)(*(int *)(&DAT_000022dc + param_2) + 8);
    *(undefined2 *)(param_1 + 0xbe) = uVar2;
    *(undefined2 *)(param_1 + 0x36) = uVar2;
    *(undefined4 *)(param_1 + 0xe8c) = DAT_001cdc50;
    FUN_0036e734(param_1 + 0x1a4,4);
    *(undefined4 *)(param_1 + 0xe94) = 0xffffffff;
    FUN_0037572c(DAT_001cdc54,param_1);
    return;
  }
  return;
}
