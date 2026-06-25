// OoT3D decomp @ 00345394  name=FUN_00345394  size=120

void FUN_00345394(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  FUN_0036055c(param_2,param_1,DAT_0034540c,0);
  uVar2 = 0x89;
  if ((*(uint *)(DAT_00345410 + param_1) & 0x8000) != 0) {
    uVar2 = 0x22c;
  }
  FUN_00359aa0(param_1 + 0x254,param_2,uVar2);
  *(undefined2 *)(DAT_00345414 + param_1) = 1;
  if (*(char *)(param_1 + 0x1749) != '\x03') {
    *(undefined *)(param_1 + 0x1749) = 0;
    iVar1 = DAT_0034541c;
    *(undefined4 *)(DAT_0034541c + 0xcc) = DAT_00345418;
    *(undefined *)(iVar1 + 0xd4) = 0;
  }
  return;
}

