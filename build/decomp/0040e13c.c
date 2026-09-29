// OoT3D decomp @ 0040e13c  name=FUN_0040e13c  size=8

undefined4 FUN_0040e13c(int param_1,undefined4 param_2,undefined4 *param_3)

{
  int iVar1;
  undefined4 *puVar2;

  iVar1 = FUN_003042d4(*(undefined4 *)(*(int *)(param_1 + 4) + 0x3c));
  if ((iVar1 != 0) && (puVar2 = (undefined4 *)FUN_0040dbb0(), puVar2 != (undefined4 *)0x0)) {
    *param_3 = *puVar2;
    param_3[1] = puVar2[1];
    *(undefined1 *)(param_3 + 2) = *(undefined1 *)(puVar2 + 2);
    *(undefined1 *)((int)param_3 + 9) = *(undefined1 *)((int)puVar2 + 9);
    return 1;
  }
  return 0;
}
