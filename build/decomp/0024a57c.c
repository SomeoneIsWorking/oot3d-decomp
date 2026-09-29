// OoT3D decomp @ 0024a57c  name=FUN_0024a57c  size=172

void FUN_0024a57c(int param_1,int param_2)

{
  undefined4 uVar1;

  if (*(char *)(param_1 + 0x251) == '\0') {
    FUN_00357a50(param_1 + 0x1c8,1,3,DAT_0024a62c,2);
  }
  else {
    FUN_00357a50(param_1 + 0x1c8,1,3,DAT_0024a628,2);
  }
  FUN_00357fd0(*(undefined4 *)(DAT_0024a630 + param_2),*(undefined4 *)(param_1 + 0x178),
               param_1 + 0x28);
  uVar1 = DAT_0024a63c;
  *(bool *)(param_1 + 0x7b0) = *(float *)(param_2 + 0x7f44) != DAT_0024a634;
  FUN_0035e240(param_1 + 0x1c8,param_1 + 0x148,uVar1,DAT_0024a638,param_1,0);
  return;
}
