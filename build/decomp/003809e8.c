// OoT3D decomp @ 003809e8  name=FUN_003809e8  size=456

void FUN_003809e8(int param_1,int param_2)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;

  FUN_00320db4();
  FUN_00322e80(param_1);
  FUN_0037632c(param_1);
  FUN_003762a4(param_2,param_2 + 0x5c78,param_1 + 0x108c);
  FUN_00376340(DAT_00380bb4,DAT_00380bb0,DAT_00380bb0,param_2,param_1,5);
  FUN_00325fbc(param_1);
  FUN_00370734(param_1 + 0x1a4);
  cVar1 = *(char *)(*(int *)(DAT_00380bb8 + param_2) + DAT_00380bbc);
  iVar5 = FUN_00369334(DAT_00380bc0,param_2,param_1,2,5);
  uVar4 = DAT_00380bcc;
  uVar3 = DAT_00380bc8;
  iVar2 = DAT_00380bc4;
  if (*(int *)(DAT_00380bc4 + 0x10) == 0) {
    if ((iVar5 != 0) || (iVar5 = FUN_0037577c(param_2), iVar5 != 0)) {
      if (cVar1 < '\x01') {
        return;
      }
      FUN_00341188(uVar4,param_1,0xc,0);
      uVar4 = DAT_00380bd4;
      uVar3 = DAT_00380bd0;
      *(undefined4 *)(iVar2 + 0x10) = 1;
      FUN_0037547c(DAT_00380bd8,param_1 + 0x28,4,uVar4,uVar4,uVar3);
      return;
    }
  }
  else {
    if ((iVar5 != 0) || (iVar5 = FUN_0037577c(param_2), iVar5 != 0)) {
      if ('\0' < cVar1) {
        return;
      }
      FUN_00341188(uVar4,param_1,0x28,0);
      *(undefined4 *)(iVar2 + 0x10) = 0;
      return;
    }
    FUN_00341188(uVar4,param_1,0x28,0);
    *(undefined4 *)(iVar2 + 0x10) = 0;
  }
  *(undefined4 *)(param_1 + 0xf60) = 0x21;
  FUN_00371808(param_2,uVar3,0xffffff9d,param_1,0);
  return;
}
