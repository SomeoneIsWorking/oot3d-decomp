// OoT3D decomp @ 0048b7f4  name=FUN_0048b7f4  size=176

void FUN_0048b7f4(int param_1,int param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 local_20;

  iVar1 = param_1 + 0x44;
  if (param_3 == 0xff) {
    if (param_2 < 8) {
      do {
        *(undefined1 *)(*(int *)(iVar1 + param_2 * 4 + 0x77c) + 0x6c) = 0;
        iVar3 = iVar1 + param_2 * 8;
        param_2 = param_2 + 1;
        *(undefined4 *)(iVar3 + 0x954) = 0xff;
        *(undefined1 *)(iVar3 + 0x958) = 0;
      } while (param_2 < 8);
      return;
    }
  }
  else {
    *(undefined1 *)(*(int *)(iVar1 + param_2 * 4 + 0x77c) + 0x6c) = 1;
    iVar3 = *(int *)(iVar1 + (param_2 + 0x96) * 4 + 0x524);
    local_20 = param_4;
    uVar2 = FUN_00305980(param_1 + 0x968,param_3 + 0xa5,&local_20);
    FUN_00305950(iVar3,uVar2,local_20);
    uVar2 = DAT_0048b8a4;
    iVar1 = iVar1 + param_2 * 8;
    *(undefined1 *)(iVar3 + 0x14) = 1;
    *(undefined4 *)(iVar3 + 0x18) = uVar2;
    *(int *)(iVar1 + 0x954) = param_3;
    *(undefined1 *)(iVar1 + 0x958) = 1;
  }
  return;
}
