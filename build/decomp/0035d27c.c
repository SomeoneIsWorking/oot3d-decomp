// OoT3D decomp @ 0035d27c  name=FUN_0035d27c  size=80

void FUN_0035d27c(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  
  uVar1 = DAT_0035d2cc;
  *(undefined4 *)(param_1 + 0x2210) = param_2;
  piVar2 = DAT_0035d2d0;
  *(undefined4 *)(param_1 + 0x2214) = uVar1;
  iVar3 = 0;
  *(undefined *)(param_1 + 0x221a) = 0;
  do {
    FUN_0048961c(*piVar2 + (uint)*(ushort *)(*(int *)(param_1 + 0x170c) + 0xf4));
    iVar3 = iVar3 + 1;
    piVar2 = piVar2 + 1;
  } while (iVar3 < 4);
  return;
}

