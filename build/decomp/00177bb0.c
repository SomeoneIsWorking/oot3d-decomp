// OoT3D decomp @ 00177bb0  name=FUN_00177bb0  size=104

void FUN_00177bb0(int param_1,undefined4 param_2)

{
  float fVar1;
  undefined4 uVar2;
  int iVar3;

  iVar3 = FUN_0036adf4();
  if (iVar3 != 0) {
    FUN_00375c10(param_2,*(undefined1 *)(param_1 + 0x1c0));
    fVar1 = DAT_00177c1c;
    *(undefined2 *)(DAT_00177c18 + param_1) = 0x4b;
    uVar2 = DAT_00177c20;
    *(float *)(param_1 + 0xc) = *(float *)(param_1 + 0xc) - fVar1;
    *(undefined4 *)(param_1 + 0x1bc) = uVar2;
    FUN_00371808(param_2,0xc1c,0x4c,param_1,0);
  }
  return;
}
