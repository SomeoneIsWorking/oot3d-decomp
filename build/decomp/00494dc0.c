// OoT3D decomp @ 00494dc0  name=FUN_00494dc0  size=188

void FUN_00494dc0(int param_1,int param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 local_20;

  iVar1 = param_1 + 0x44;
  iVar2 = param_3 + 0x96;
  if (param_3 == 0xff) {
    if (param_2 < 8) {
      do {
        *(undefined1 *)(*(int *)(iVar1 + param_2 * 4 + 0x77c) + 0x6c) = 0;
        iVar2 = iVar1 + param_2 * 8;
        param_2 = param_2 + 1;
        *(undefined4 *)(iVar2 + 0x954) = 0xff;
        *(undefined1 *)(iVar2 + 0x958) = 0;
      } while (param_2 < 8);
      return;
    }
  }
  else {
    iVar4 = iVar1 + param_2 * 8;
    *(undefined1 *)(*(int *)(iVar1 + param_2 * 4 + 0x77c) + 0x6c) = 1;
    iVar1 = *(int *)(iVar1 + (param_2 + 0x96) * 4 + 0x524);
    if (*(char *)(iVar4 + 0x958) != '\0') {
      iVar2 = param_3 + 0xaa;
    }
    local_20 = param_4;
    uVar3 = FUN_00305980(param_1 + 0x968,iVar2,&local_20);
    FUN_00305950(iVar1,uVar3,local_20);
    uVar3 = DAT_00494e7c;
    *(undefined1 *)(iVar1 + 0x14) = 1;
    *(undefined4 *)(iVar1 + 0x18) = uVar3;
    *(int *)(iVar4 + 0x954) = param_3;
    *(undefined1 *)(iVar4 + 0x958) = 0;
  }
  return;
}
