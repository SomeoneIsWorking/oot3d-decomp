// OoT3D decomp @ 0049f15c  name=FUN_0049f15c  size=196

undefined4 FUN_0049f15c(int param_1)

{
  uint uVar1;
  bool bVar2;
  uint extraout_r12;
  uint uVar3;
  bool bVar4;
  
  uVar1 = func_0x0036b4ec();
  bVar2 = false;
  bVar4 = (*(uint *)(param_1 + 0x1710) & 0x8000000) != 0;
  if (bVar4) {
    uVar1 = (uint)*(byte *)(param_1 + 0x1a7);
  }
  uVar3 = extraout_r12;
  if ((bVar4 && uVar1 != 1) && (uVar3 = uRam0049f220, *(uint *)(param_1 + 0x1708) == uRam0049f220))
  {
    bVar2 = true;
  }
  uVar1 = **(uint **)(iRam0049f224 + param_1);
  bVar4 = (uVar1 & 0x100) == 0;
  if (!bVar4) {
    uVar1 = *(uint *)(param_1 + 0x1708);
    uVar3 = uRam0049f228;
  }
  if ((bVar4 || uVar1 == uVar3) || (bVar2)) {
    func_0x0035d27c(param_1,uRam0049f22c);
    if (*(char *)(param_1 + 0x1ac) < '\0') {
      func_0x0034c998(param_1);
    }
    func_0x0049fa38(param_1 + 0x1794);
    func_0x0036f59c(param_1,uRam0049f230);
  }
  else {
    *(uint *)(param_1 + 0x1710) = *(uint *)(param_1 + 0x1710) | 0x400000;
    func_0x0033f860(param_1);
  }
  return 1;
}

