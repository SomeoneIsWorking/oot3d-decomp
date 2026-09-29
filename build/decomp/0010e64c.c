// OoT3D decomp @ 0010e64c  name=FUN_0010e64c  size=408

void FUN_0010e64c(int param_1,int param_2)

{
  undefined2 uVar1;
  short sVar2;
  int iVar3;
  short *psVar4;
  int iVar5;
  uint in_fpscr;
  undefined4 uVar6;
  undefined4 uVar7;
  float fVar8;
  float fVar9;
  undefined4 uVar10;

  iVar5 = *(int *)(DAT_0010e7e4 + param_2);
  iVar3 = FUN_0037571c(param_2);
  if (iVar3 != 0) {
    param_2 = param_2 + *(short *)(param_1 + 0xe88) * 4;
    psVar4 = *(short **)(&DAT_000022dc + param_2);
    if (psVar4 != (short *)0x0) {
      sVar2 = *psVar4;
      if (sVar2 == 1) {
        uVar6 = VectorSignedToFloat(*(undefined4 *)(psVar4 + 6),(byte)(in_fpscr >> 0x15) & 3);
        uVar7 = VectorSignedToFloat(*(undefined4 *)(psVar4 + 8),(byte)(in_fpscr >> 0x15) & 3);
        uVar10 = VectorSignedToFloat(*(undefined4 *)(psVar4 + 10),(byte)(in_fpscr >> 0x15) & 3);
        *(undefined4 *)(param_1 + 0x30) = uVar10;
        *(undefined4 *)(param_1 + 0x2c) = uVar7;
        *(undefined4 *)(param_1 + 0x28) = uVar6;
        uVar1 = *(undefined2 *)(*(int *)(&DAT_000022dc + param_2) + 8);
        *(undefined2 *)(param_1 + 0xbe) = uVar1;
        *(undefined2 *)(param_1 + 0x36) = uVar1;
        *(undefined4 *)(param_1 + 0xe8c) = DAT_0010e7f8;
        return;
      }
      if (sVar2 == 3) {
        uVar7 = VectorSignedToFloat(*(undefined4 *)(psVar4 + 6),(byte)(in_fpscr >> 0x15) & 3);
        uVar10 = VectorSignedToFloat(*(undefined4 *)(psVar4 + 8),(byte)(in_fpscr >> 0x15) & 3);
        uVar6 = VectorSignedToFloat(*(undefined4 *)(psVar4 + 10),(byte)(in_fpscr >> 0x15) & 3);
        *(undefined4 *)(param_1 + 0x30) = uVar6;
        *(undefined4 *)(param_1 + 0x2c) = uVar10;
        *(undefined4 *)(param_1 + 0x28) = uVar7;
        uVar1 = *(undefined2 *)(*(int *)(&DAT_000022dc + param_2) + 8);
        *(undefined2 *)(param_1 + 0xbe) = uVar1;
        *(undefined2 *)(param_1 + 0x36) = uVar1;
        *(undefined4 *)(param_1 + 0xe8c) = DAT_0010e7fc;
        FUN_0036e734(param_1 + 0x1a4,4);
        *(undefined4 *)(param_1 + 0xe94) = 0xffffffff;
        return;
      }
      if (sVar2 == 4) {
        *(undefined4 *)(param_1 + 0xe8c) = DAT_0010e800;
        *(undefined4 *)(param_1 + 0x140) = 0;
        return;
      }
      if (sVar2 == 7) {
        *(undefined4 *)(param_1 + 0xe8c) = DAT_0010e7e8;
        FUN_0036e734(param_1 + 0x1a4,4);
        *(undefined4 *)(param_1 + 0xe94) = 0xffffffff;
        fVar8 = (float)VectorUnsignedToFloat
                                 ((uint)(iVar5 << 0x1a) >> 0x10,(byte)(in_fpscr >> 0x15) & 3);
        fVar9 = (float)VectorSignedToFloat((int)*(short *)(*DAT_0010e7f0 + 0x110),
                                           (byte)(in_fpscr >> 0x15) & 3);
        sVar2 = (short)(int)((fVar8 * DAT_0010e7ec) / fVar9 + DAT_0010e7f4);
        if (*(short *)(param_1 + 0x1c) != 0) {
          sVar2 = sVar2 + -0x8000;
        }
        *(short *)(param_1 + 0xe86) = sVar2;
      }
    }
  }
  return;
}
