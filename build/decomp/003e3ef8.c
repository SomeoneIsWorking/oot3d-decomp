// OoT3D decomp @ 003e3ef8  name=FUN_003e3ef8  size=104

void FUN_003e3ef8(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  float fVar2;

  uVar1 = DAT_003e3f60;
  if (*(char *)(param_1 + 0x688) != '\0') {
    fVar2 = (float)FUN_00371e50(DAT_003e3f60);
    *(float *)(param_1 + 100) = fVar2 + DAT_003e3f64;
    fVar2 = (float)FUN_00371e50(uVar1);
    uVar1 = DAT_003e3f6c;
    *(float *)(param_1 + 0x6c) = fVar2 + DAT_003e3f68;
    *(undefined4 *)(param_1 + 0x5d0) = uVar1;
  }
  FUN_003631d0(param_1,param_2,1);
  return;
}
