// OoT3D decomp @ 0033de14  name=FUN_0033de14  size=84

undefined4 FUN_0033de14(undefined4 param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined auStack_10 [4];
  
  iVar2 = *DAT_0033de68;
  FUN_002da58c(auStack_10,iVar2 + 0x58);
  uVar1 = FUN_003222dc(iVar2,param_1,4,0,0,0);
  FUN_002da528(auStack_10);
  return uVar1;
}

