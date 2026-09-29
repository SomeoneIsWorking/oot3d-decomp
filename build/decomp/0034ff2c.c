// OoT3D decomp @ 0034ff2c  name=FUN_0034ff2c  size=372

undefined4
FUN_0034ff2c(int param_1,undefined4 param_2,int param_3,int param_4,int param_5,int param_6)

{
  int iVar1;
  undefined4 uVar2;
  uint in_fpscr;
  float fVar3;
  undefined4 local_34;
  undefined4 uStack_30;
  float local_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  float local_20;
  float local_1c;
  float local_18;

  if (-1 < param_5) {
    param_6 = DAT_003500a0 + param_5 * 0x118;
    *(int *)(param_6 + 0x14) = param_4 * 6;
    *(int *)(param_6 + 0xc) = param_4 << 2;
    *(byte *)(param_1 + 0x14) = (byte)param_5 & 1;
  }
  iVar1 = (**(code **)(*(int *)*DAT_003500a4 + 8))((int *)*DAT_003500a4,0x1b8);
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar2 = FUN_00348f34(iVar1,param_6);
  }
  *(undefined4 *)(param_1 + 4) = uVar2;
  FUN_00348be4();
  if (((*DAT_003500a8 & 1) == 0) && (iVar1 = FUN_003679b4(DAT_003500a8), iVar1 != 0)) {
    FUN_0036788c(DAT_003500ac);
  }
  uVar2 = BoardModelFactory_00340d00
                    (*(undefined4 *)(DAT_003500b8 + 0x47c),*(undefined4 *)(param_1 + 4),0);
  *(undefined4 *)(param_1 + 8) = uVar2;
  local_2c = (float)VectorSignedToFloat(param_2,(byte)(in_fpscr >> 0x15) & 3);
  local_34 = *DAT_003500bc;
  uStack_30 = DAT_003500bc[1];
  uStack_28 = DAT_003500bc[3];
  uStack_24 = DAT_003500bc[4];
  local_2c = DAT_003500c0 / local_2c;
  local_20 = (float)VectorSignedToFloat(param_3 + -1,(byte)(in_fpscr >> 0x15) & 3);
  fVar3 = (float)VectorSignedToFloat(param_3,(byte)(in_fpscr >> 0x15) & 3);
  local_20 = (DAT_003500c0 / fVar3) * local_20;
  local_1c = (float)VectorSignedToFloat(param_2,(byte)(in_fpscr >> 0x15) & 3);
  local_1c = DAT_003500c0 / local_1c;
  fVar3 = (float)VectorSignedToFloat(param_3,(byte)(in_fpscr >> 0x15) & 3);
  local_18 = (float)VectorSignedToFloat(param_3 + -1,(byte)(in_fpscr >> 0x15) & 3);
  local_18 = (DAT_003500c0 / fVar3) * local_18;
  FUN_0034ea48(*(undefined4 *)(param_1 + 8),&local_34);
  *(undefined4 *)(param_1 + 0xc) = param_2;
  *(int *)(param_1 + 0x10) = param_3;
  return 1;
}
