// OoT3D decomp @ 00301300  name=FUN_00301300  size=136

undefined4 * FUN_00301300(undefined4 param_1,undefined4 param_2,int param_3,undefined1 param_4)

{
  undefined4 uVar1;
  undefined4 *puVar2;

  puVar2 = (undefined4 *)FUN_0035010c(0x118);
  if (puVar2 != (undefined4 *)0x0) {
    *puVar2 = DAT_00301388;
    *(undefined1 *)((int)puVar2 + 9) = 0;
    *(undefined1 *)((int)puVar2 + 10) = 0;
    *(undefined1 *)((int)puVar2 + 0xb) = 0;
    FUN_00305a20(puVar2 + 5,param_1);
    puVar2[0x45] = 0;
    puVar2[1] = 0;
    puVar2[3] = param_2;
    puVar2[4] = 0;
    *(undefined1 *)(puVar2 + 2) = 0;
    if (param_3 != 0) {
      *(undefined1 *)((int)puVar2 + 10) = 1;
      puVar2[0x45] = param_3;
    }
    uVar1 = DAT_0030138c;
    *(undefined1 *)((int)puVar2 + 0xb) = param_4;
    FUN_00306e40(uVar1,puVar2);
  }
  return puVar2;
}
