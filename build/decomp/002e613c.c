// OoT3D decomp @ 002e613c  name=FUN_002e613c  size=132

undefined4 *
FUN_002e613c(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined1 param_4)

{
  undefined4 uVar1;
  undefined4 *puVar2;

  puVar2 = (undefined4 *)FUN_0035010c(0x118);
  if (puVar2 != (undefined4 *)0x0) {
    *puVar2 = DAT_002e61c0;
    *(undefined1 *)((int)puVar2 + 9) = 0;
    *(undefined1 *)((int)puVar2 + 10) = 0;
    *(undefined1 *)((int)puVar2 + 0xb) = 0;
    FUN_00305a20(puVar2 + 5,param_1);
    puVar2[3] = 4;
    puVar2[4] = param_2;
    puVar2[0x45] = 0;
    puVar2[1] = param_3;
    *(undefined1 *)(puVar2 + 2) = 0;
    *(undefined1 *)((int)puVar2 + 9) = 1;
    uVar1 = DAT_002e61c4;
    *(undefined1 *)((int)puVar2 + 0xb) = param_4;
    FUN_00306e40(uVar1,puVar2);
  }
  return puVar2;
}
