// OoT3D decomp @ 0045cd50  name=FUN_0045cd50  size=292

void FUN_0045cd50(byte *param_1)

{
  uint *puVar1;
  undefined4 uVar2;
  int iVar3;
  uint in_fpscr;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;

  puVar1 = DAT_0045ce78;
  if (param_1[4] != 0) {
    local_20 = (float)VectorUnsignedToFloat((uint)param_1[7],(byte)(in_fpscr >> 0x15) & 3);
    local_1c = (float)VectorUnsignedToFloat((uint)param_1[6],(byte)(in_fpscr >> 0x15) & 3);
    local_18 = (float)VectorUnsignedToFloat((uint)param_1[5],(byte)(in_fpscr >> 0x15) & 3);
    local_14 = (float)VectorUnsignedToFloat((uint)param_1[4],(byte)(in_fpscr >> 0x15) & 3);
    local_20 = local_20 * DAT_0045ce74;
    local_1c = local_1c * DAT_0045ce74;
    local_18 = local_18 * DAT_0045ce74;
    local_14 = local_14 * DAT_0045ce74;
    if (((*DAT_0045ce78 & 1) == 0) && (iVar3 = FUN_003679b4(DAT_0045ce78), iVar3 != 0)) {
      FUN_0036788c(DAT_0045ce7c);
    }
    uVar2 = DAT_0045ce88;
    FUN_003339e8(DAT_0045ce88,4,&local_20,9);
    if (*param_1 < 2) {
      if (((*puVar1 & 1) == 0) && (iVar3 = FUN_003679b4(DAT_0045ce78), iVar3 != 0)) {
        FUN_0036788c(DAT_0045ce7c);
      }
      FUN_003339e8(uVar2,6,&local_20,9);
    }
  }
  return;
}
