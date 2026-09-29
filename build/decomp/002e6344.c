// OoT3D decomp @ 002e6344  name=FUN_002e6344  size=124

undefined4 * FUN_002e6344(undefined4 param_1,undefined1 param_2)

{
  undefined4 uVar1;
  undefined4 *puVar2;

  puVar2 = (undefined4 *)FUN_0035010c(0x118);
  if (puVar2 != (undefined4 *)0x0) {
    *puVar2 = DAT_002e63c0;
    *(undefined1 *)((int)puVar2 + 9) = 0;
    *(undefined1 *)((int)puVar2 + 10) = 0;
    *(undefined1 *)((int)puVar2 + 0xb) = 0;
    FUN_00305a20(puVar2 + 5,param_1);
    puVar2[0x45] = 0;
    puVar2[3] = 4;
    puVar2[1] = 0;
    puVar2[4] = 0;
    *(undefined1 *)(puVar2 + 2) = 0;
    *(undefined1 *)((int)puVar2 + 9) = 2;
    uVar1 = DAT_002e63c4;
    *(undefined1 *)((int)puVar2 + 0xb) = param_2;
    FUN_00306e40(uVar1,puVar2);
  }
  return puVar2;
}
