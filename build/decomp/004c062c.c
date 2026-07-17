// OoT3D decomp @ 004c062c  name=FUN_004c062c  size=64

void FUN_004c062c(int param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  func_0x002cdbfc();
  iVar3 = 0;
  do {
    iVar4 = param_1 + iVar3 * 4;
    uVar1 = func_0x002cdb60(*(undefined4 *)(iVar4 + 0x268));
    iVar2 = func_0x002cdb0c(*(undefined4 *)(iVar4 + 0x68));
    iVar3 = iVar3 + 1;
    *(uint *)(iVar4 + 0x468) = uVar1 | iVar2 << 0xd;
  } while (iVar3 < 0x80);
  return;
}

