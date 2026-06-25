// OoT3D decomp @ 00453684  name=FUN_00453684  size=160

int FUN_00453684(uint param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  iVar1 = DAT_00453724;
  *(undefined *)(DAT_00453724 + 4) = 1;
  if (param_1 < DAT_00453728) {
    uVar3 = 0;
  }
  else if (param_1 < DAT_0045372c) {
    uVar3 = 1;
  }
  else if (param_1 < DAT_00453730) {
    uVar3 = 2;
  }
  else if (param_1 < DAT_00453734) {
    uVar3 = 3;
  }
  else if (param_1 < DAT_00453738) {
    uVar3 = 4;
  }
  else if (param_1 < DAT_0045373c) {
    uVar3 = 5;
  }
  else {
    uVar3 = 6;
  }
  uVar2 = FUN_0030f0ec();
  uVar2 = FUN_0030f0c0(uVar2,uVar3);
  uVar3 = DAT_00453740;
  *(uint *)(iVar1 + 0x28) = param_1;
  FUN_0030efb0(uVar2,uVar3,0);
  return (int)*(char *)(iVar1 + 4);
}

