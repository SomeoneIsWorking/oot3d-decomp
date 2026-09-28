// OoT3D decomp @ 0033d270  name=FUN_0033d270  size=356

/* WARNING: Removing unreachable block (ram,0x003560c0) */
/* WARNING: Removing unreachable block (ram,0x003560a8) */
/* WARNING: Removing unreachable block (ram,0x003560bc) */
/* WARNING: Removing unreachable block (ram,0x003560c4) */
/* WARNING: Removing unreachable block (ram,0x003560c8) */
/* WARNING: Removing unreachable block (ram,0x003560cc) */
/* WARNING: Removing unreachable block (ram,0x003560d0) */
/* WARNING: Removing unreachable block (ram,0x00356094) */

void FUN_0033d270(int param_1)

{
  int iVar1;
  int iVar2;

  *(char *)(iRam0033d358 + 0x37) = (char)param_1;
  iVar2 = func_0x00366684(0);
  iVar1 = iRam0033d35c;
  if (iVar2 == iRam0033d35c) {
    iVar2 = 0;
  }
  else {
    iVar2 = func_0x00366684(3);
    if (iVar2 != iVar1) {
      return;
    }
    iVar2 = 3;
  }
  if (param_1 == 0) {
    if (iVar2 == 3) {
      func_0x0036ec40(3,iVar1,0);
      func_0x00356018(3,0);
    }
    func_0x003560d8(iVar2,3,0x7f);
    iVar1 = iRam003560d4;
  }
  else {
    func_0x003560d8(iVar2,3,0);
    iVar1 = iRam003560d4;
  }
  if (iVar2 != 3) {
    iRam003560d4 = iVar1;
    return;
  }
  iRam003560d4 = iVar1;
  FUN_0030ee14(&stack0xffffffe8,iVar1 + -0x244);
  *(undefined4 *)(iVar1 + 0x1c) = 0;
  func_0x0030ede0(&stack0xffffffe8);
  return;
}
