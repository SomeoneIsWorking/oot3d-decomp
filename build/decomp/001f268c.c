// OoT3D decomp @ 001f268c  name=FUN_001f268c  size=356

void FUN_001f268c(int param_1,undefined4 param_2,undefined4 *param_3,undefined4 *param_4)

{
  float fVar1;
  short sVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  bool bVar7;
  uint in_fpscr;
  float fVar8;

  fVar1 = DAT_001f2838;
  uVar5 = param_4[1];
  uVar6 = param_4[2];
  *param_3 = *param_4;
  param_3[1] = uVar5;
  param_3[2] = uVar6;
  uVar5 = param_4[4];
  uVar6 = param_4[5];
  param_3[3] = param_4[3];
  param_3[4] = uVar5;
  param_3[5] = uVar6;
  uVar5 = param_4[7];
  uVar6 = param_4[8];
  param_3[6] = param_4[6];
  param_3[7] = uVar5;
  param_3[8] = uVar6;
  fVar8 = (float)VectorSignedToFloat((int)*(short *)(*DAT_001f2834 + 0x110),
                                     (byte)(in_fpscr >> 0x15) & 3);
  *(short *)(param_3 + 0x18) = (short)(int)(fVar1 / fVar8 + DAT_001f283c);
  *(undefined2 *)(param_3 + 0x12) = *(undefined2 *)(param_4 + 10);
  if (*(short *)(param_4 + 0xb) < 0) {
    param_3[0xe] = 0;
    *(undefined2 *)(param_3 + 0x13) = 0xffff;
    FUN_0034ea6c(param_3[0x19],DAT_001f2850);
    FUN_00340de8(param_3[0x19],DAT_001f2854);
    FUN_0034ea48(param_3[0x19],DAT_001f2858);
  }
  else {
    *(short *)(param_3 + 0x13) = *(short *)(param_4 + 0xb);
    sVar2 = FUN_00363c10();
    *(short *)((int)param_3 + 0x4e) = sVar2;
    if ((sVar2 < 0) || (iVar3 = FUN_00373074(param_1 + 0x3a58), iVar3 == 0)) {
      *(undefined2 *)(param_3 + 0x18) = 0xffff;
      param_3[10] = 0;
    }
    param_3[0xe] = 0;
    iVar3 = FUN_0033a904(param_1,0,(int)*(short *)(param_3 + 0x13),param_4[9],0xffffffff);
    param_3[0x1b] = iVar3;
    *(undefined1 *)(iVar3 + 0xad) = 0;
  }
  param_3[0x1e] = 1;
  uVar4 = (uint)*(ushort *)(param_3 + 0x13);
  bVar7 = uVar4 == 0x69;
  if (bVar7) {
    uVar4 = param_4[9];
  }
  uVar5 = DAT_001f2840;
  if (bVar7 && uVar4 == 0x1d) {
    uVar5 = DAT_001f2844;
  }
  param_3[10] = uVar5;
  param_3[9] = DAT_001f2848;
  *(undefined2 *)((int)param_3 + 0x4a) = *(undefined2 *)((int)param_4 + 0x2a);
                    /* WARNING: Subroutine does not return */
  FUN_003759d0();
}
