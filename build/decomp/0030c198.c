// OoT3D decomp @ 0030c198  name=FUN_0030c198  size=80

undefined4 FUN_0030c198(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = FUN_0030c550();
  puVar2 = (undefined4 *)FUN_0030c20c(iVar1,8);
  puVar2[3] = *(undefined4 *)(iVar1 + 0x180);
  *(undefined *)(puVar2 + 1) = 0x14;
  puVar2[4] = param_1 + 0xf4;
  puVar2[6] = param_2;
  puVar2[7] = param_3;
  if (*(undefined4 **)(iVar1 + 0x16c) == (undefined4 *)0x0) {
    *(undefined4 **)(iVar1 + 0x168) = puVar2;
  }
  else {
    **(undefined4 **)(iVar1 + 0x16c) = puVar2;
  }
  *(undefined4 **)(iVar1 + 0x16c) = puVar2;
  *puVar2 = 0;
  return *(undefined4 *)(iVar1 + 0x170);
}

