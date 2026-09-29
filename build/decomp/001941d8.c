// OoT3D decomp @ 001941d8  name=FUN_001941d8  size=676

void FUN_001941d8(int param_1,int param_2)

{
  byte bVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  short *psVar7;
  bool bVar8;
  uint in_fpscr;
  uint uVar9;
  float fVar10;

  fVar10 = *(float *)(param_1 + 0x1e4);
  if (*(short *)(param_1 + 0xd3e) == 0) {
    FUN_00373500(*(undefined4 *)(param_1 + 0xd4c),*(undefined4 *)(param_1 + 0xd54),DAT_0019447c,
                 param_1 + 0x2c);
    FUN_00373500(DAT_00194484,*(undefined4 *)(param_1 + 0xd58),DAT_00194480,param_1 + 0xd48);
    FUN_00373500(DAT_00194490,DAT_0019448c,DAT_00194488,param_1 + 0xd54);
    FUN_00373500(DAT_0019449c,DAT_00194498,DAT_00194494,param_1 + 0xd58);
    if (*(int *)(param_1 + 0xd48) < DAT_001944a0) {
      *(short *)(param_1 + 0xbe) = *(short *)(param_1 + 0xbe) + 3000;
    }
    else if ((int)*(short *)(param_1 + 0xbe) + 7999U < DAT_001944a4) {
      FUN_003731e0(param_1 + 0x1a8);
      FUN_00370084(param_1 + 0xbe,0,5,1000);
      fVar10 = (float)VectorSignedToFloat((int)*(short *)(param_1 + 0xbe),
                                          (byte)(in_fpscr >> 0x15) & 3);
      if ((int)ABS(fVar10) < DAT_001944a8) {
        *(undefined2 *)(param_1 + 0xd3e) = 1;
      }
    }
    else {
      *(short *)(param_1 + 0xbe) = *(short *)(param_1 + 0xbe) + 3000;
    }
  }
  else {
    FUN_003731e0(param_1 + 0x1a8);
    uVar4 = DAT_001944b4;
    uVar3 = DAT_001944b0;
    uVar2 = DAT_001944ac;
    uVar9 = in_fpscr & 0xfffffff | (uint)(*(float *)(param_1 + 0xd6c) == fVar10) << 0x1e |
            (uint)(fVar10 <= *(float *)(param_1 + 0xd6c)) << 0x1d;
    bVar1 = (byte)(uVar9 >> 0x18);
    bVar8 = (bool)(bVar1 >> 6);
    if (!(bool)(bVar1 >> 5 & 1) || bVar8) {
      bVar8 = *(short *)(param_1 + 0xd3c) == 0;
    }
    if (bVar8) {
      if (*(short *)(param_2 + 0x104) == 0x3b) {
        uVar5 = FUN_0036ae14(param_1 + 0x1a8,9);
        uVar5 = VectorSignedToFloat(uVar5,(byte)(uVar9 >> 0x15) & 3);
        *(undefined4 *)(param_1 + 0xd6c) = uVar5;
        FUN_00375c08(uVar4,uVar3,uVar5,uVar2,param_1 + 0x1a8,9,0);
      }
      else {
        uVar5 = FUN_0036ae14(param_1 + 0x1a8,1);
        uVar5 = VectorSignedToFloat(uVar5,(byte)(uVar9 >> 0x15) & 3);
        *(undefined4 *)(param_1 + 0xd6c) = uVar5;
        FUN_00375c08(uVar4,uVar3,uVar5,uVar2,param_1 + 0x1a8,1,0);
      }
      *(undefined2 *)(param_1 + 0xd3c) = 1;
    }
    iVar6 = FUN_0037571c(param_2);
    psVar7 = (short *)0x0;
    if (iVar6 != 0) {
      psVar7 = *(short **)(DAT_001944b8 + param_2);
    }
    if ((iVar6 != 0 && psVar7 != (short *)0x0) && (*psVar7 == 3)) {
      *(undefined2 *)(param_1 + 0xd3c) = 0;
      *(undefined2 *)(param_1 + 0xd3e) = 0;
      if (*(short *)(param_2 + 0x104) == 0x3b) {
        uVar5 = FUN_0036ae14(param_1 + 0x1a8,6);
        uVar5 = VectorSignedToFloat(uVar5,(byte)(uVar9 >> 0x15) & 3);
        *(undefined4 *)(param_1 + 0xd6c) = uVar5;
        FUN_00375c08(uVar4,uVar3,uVar5,uVar2,param_1 + 0x1a8,6,2);
      }
      else {
        uVar5 = FUN_0036ae14(param_1 + 0x1a8,4);
        uVar5 = VectorSignedToFloat(uVar5,(byte)(uVar9 >> 0x15) & 3);
        *(undefined4 *)(param_1 + 0xd6c) = uVar5;
        FUN_00375c08(uVar4,uVar3,uVar5,uVar2,param_1 + 0x1a8,4,2);
      }
      uVar2 = DAT_001944bc;
      *(undefined2 *)(param_1 + 0xd36) = 1;
      *(undefined4 *)(param_1 + 0x1a4) = uVar2;
    }
  }
  FUN_0036d44c(param_1,param_2,0);
  return;
}
