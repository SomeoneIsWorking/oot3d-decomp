// OoT3D decomp @ 00111cfc  name=FUN_00111cfc  size=360

void FUN_00111cfc(int param_1,undefined4 param_2)

{
  short sVar1;
  int iVar2;
  undefined4 uVar3;
  float fVar4;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;

  sVar1 = *(short *)(param_1 + 0xc00);
  if ((sVar1 != 0) && (sVar1 = sVar1 + -1, *(short *)(param_1 + 0xc00) = sVar1, sVar1 == 0)) {
    FUN_00369c88(param_1,4);
  }
  iVar2 = FUN_00369bec(param_1,param_2);
  if (iVar2 == 0) {
    FUN_00375bcc(param_1,DAT_00111e64);
    FUN_00369c88(param_1,1);
    uVar3 = DAT_00111e68;
  }
  else {
    if (*(float *)(param_1 + 0xc18) <
        (*(float *)(param_1 + 0x2c) + *(float *)(param_1 + 100) * DAT_00111e6c) -
        *(float *)(param_1 + 0x84)) {
      if ((*(short *)(param_1 + 0xc08) != 0) &&
         (sVar1 = *(short *)(param_1 + 0xc08) + -1, *(short *)(param_1 + 0xc08) = sVar1, sVar1 != 0)
         ) {
        return;
      }
      FUN_00375bcc(param_1,DAT_00111e78);
      *(undefined2 *)(param_1 + 0xc08) = 3;
      return;
    }
    local_1c = DAT_00111e70;
    local_18 = DAT_00111e70;
    local_14 = DAT_00111e70;
    local_28 = *(undefined4 *)(param_1 + 0x28);
    local_24 = *(undefined4 *)(param_1 + 0x84);
    local_20 = *(undefined4 *)(param_1 + 0x30);
    FUN_00369b58(param_2,&local_28,&local_1c,&local_1c,100,0xdc,8);
    *(float *)(param_1 + 0x2c) = *(float *)(param_1 + 0xc18) + *(float *)(param_1 + 0x84);
    fVar4 = (float)FUN_00369c88(param_1,3);
    *(short *)(param_1 + 0xc0c) = (short)(int)fVar4;
    uVar3 = DAT_00111e74;
  }
  *(undefined4 *)(param_1 + 0x978) = uVar3;
  return;
}
