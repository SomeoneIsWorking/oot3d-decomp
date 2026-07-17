// OoT3D decomp @ 003665fc  name=FUN_003665fc  size=128

void FUN_003665fc(uint param_1,int param_2,undefined4 param_3)

{
  uint uVar1;
  int iVar2;
  
  iVar2 = func_0x0032e658();
  if (iVar2 != 0) {
    if ((param_2 + param_1 * 0x100 == 0x101) && (iVar2 = func_0x00366684(3), iVar2 != iRam0036667c))
    {
      *(undefined1 *)(iRam00366680 + 0x36) = 0;
    }
    uVar1 = param_1 >> 4;
    if (param_1 >> 4 == 0) {
      uVar1 = param_1 & 0xf;
    }
    for (; uVar1 <= (param_1 & 0xf); uVar1 = uVar1 + 1 & 0xff) {
      func_0x002d0190(uVar1,param_2,param_3);
    }
  }
  return;
}

