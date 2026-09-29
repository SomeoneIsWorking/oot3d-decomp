// OoT3D decomp @ 0020dc5c  name=FUN_0020dc5c  size=376

undefined4 FUN_0020dc5c(int param_1,undefined4 param_2,undefined4 *param_3,undefined4 *param_4)

{
  float fVar1;
  short sVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  uint in_fpscr;
  float fVar6;
  float fVar7;

  fVar1 = DAT_0020de44;
  uVar4 = param_4[1];
  uVar5 = param_4[2];
  *param_3 = *param_4;
  param_3[1] = uVar4;
  param_3[2] = uVar5;
  uVar4 = param_4[4];
  uVar5 = param_4[5];
  param_3[3] = param_4[3];
  param_3[4] = uVar4;
  param_3[5] = uVar5;
  fVar6 = (float)VectorSignedToFloat(param_4[0xd],(byte)(in_fpscr >> 0x15) & 3);
  fVar7 = (float)VectorSignedToFloat((int)*(short *)(*DAT_0020de48 + 0x110),
                                     (byte)(in_fpscr >> 0x15) & 3);
  *(short *)(param_3 + 0x18) = (short)(int)((fVar6 * fVar1) / fVar7 + DAT_0020de4c);
  *(undefined1 *)((int)param_3 + 0x62) = 0x65;
  if (-1 < (int)param_4[0xf]) {
    sVar2 = *(short *)((int)param_4 + 0x3a);
    if (sVar2 == -1) {
      return 0;
    }
    iVar3 = param_1;
    if ((sVar2 == 1 || sVar2 == 2) || sVar2 == 3) {
      iVar3 = -1;
      *(undefined2 *)(param_3 + 0x16) = 0xffff;
    }
    if ((sVar2 != 1 && sVar2 != 2) && sVar2 != 3) {
      *(short *)(param_3 + 0x16) = sVar2;
      sVar2 = FUN_00363c10();
      *(short *)((int)param_3 + 0x5a) = sVar2;
      if ((sVar2 < 0) || (iVar3 = FUN_00373074(iVar3 + 0x3a58), iVar3 == 0)) {
        *(undefined2 *)(param_3 + 0x18) = 0;
        param_3[10] = 0;
      }
      if (*(short *)(param_3 + 0x18) < 0) {
        return 0;
      }
    }
    iVar3 = FUN_0033a904(param_1,0,(int)*(short *)((int)param_4 + 0x3a),param_4[0xf],0xffffffff);
    param_3[0x1b] = iVar3;
    *(undefined1 *)(iVar3 + 0xad) = 0;
    if ((int)((uint)*(ushort *)((int)param_4 + 0x26) << 0x16) < 0) {
      uVar4 = 1;
    }
    else {
      uVar4 = 2;
    }
    param_3[0x1e] = uVar4;
  }
  param_3[10] = DAT_0020de50;
  param_3[9] = DAT_0020de54;
  uVar4 = param_4[7];
  uVar5 = param_4[8];
  param_3[0xb] = param_4[6];
  param_3[0xc] = uVar4;
  param_3[0xd] = uVar5;
  *(undefined2 *)(param_3 + 0x11) = *(undefined2 *)(param_4 + 0xb);
  *(undefined2 *)((int)param_3 + 0x46) = *(undefined2 *)(param_4 + 9);
                    /* WARNING: Subroutine does not return */
  FUN_003759d0();
}
