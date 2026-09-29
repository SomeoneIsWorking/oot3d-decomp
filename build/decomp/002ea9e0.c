// OoT3D decomp @ 002ea9e0  name=FUN_002ea9e0  size=380

void FUN_002ea9e0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  uint *puVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  uint in_fpscr;
  float local_34;
  float local_30;
  float local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;

  iVar3 = (int)*(short *)(*DAT_002eab5c + 400);
  if (iVar3 < 2) {
    iVar3 = *DAT_002eab60;
  }
  if ((iVar3 < 2) && (iVar3 = FUN_002dd704(), puVar1 = DAT_002eab74, 0 < iVar3)) {
    local_24 = DAT_002eab64;
    local_20 = VectorSignedToFloat(iVar3,(byte)(in_fpscr >> 0x15) & 3);
    local_1c = DAT_002eab64;
    local_18 = DAT_002eab68;
    local_34 = (float)VectorUnsignedToFloat(param_2,(byte)(in_fpscr >> 0x15) & 3);
    local_30 = (float)VectorUnsignedToFloat(param_3,(byte)(in_fpscr >> 0x15) & 3);
    local_2c = (float)VectorUnsignedToFloat(param_4,(byte)(in_fpscr >> 0x15) & 3);
    local_34 = local_34 * DAT_002eab6c;
    local_30 = local_30 * DAT_002eab6c;
    local_2c = local_2c * DAT_002eab6c;
    local_28 = *DAT_002eab70;
    if (((*DAT_002eab74 & 1) == 0) && (iVar4 = FUN_003679b4(DAT_002eab74), iVar4 != 0)) {
      FUN_0036788c(DAT_002eab78);
    }
    uVar2 = DAT_002eab84;
    FUN_002e74c0(DAT_002eab84,2,&local_34,&local_24,2);
    local_24 = VectorSignedToFloat(0xf0 - iVar3,(byte)(in_fpscr >> 0x15) & 3);
    local_20 = DAT_002eab88;
    if (((*puVar1 & 1) == 0) && (iVar3 = FUN_003679b4(DAT_002eab74), iVar3 != 0)) {
      FUN_0036788c(DAT_002eab78);
    }
    FUN_002e74c0(uVar2,2,&local_34,&local_24,2);
  }
  return;
}
