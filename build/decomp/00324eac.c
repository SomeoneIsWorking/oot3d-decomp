// OoT3D decomp @ 00324eac  name=FUN_00324eac  size=144

undefined4 *
FUN_00324eac(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4,undefined param_5)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  
  uVar1 = DAT_00324f3c;
  puVar2 = (undefined4 *)FUN_0035010c(0x118);
  if (puVar2 != (undefined4 *)0x0) {
    *puVar2 = uVar1;
    *(undefined *)((int)puVar2 + 9) = 0;
    *(undefined *)((int)puVar2 + 10) = 0;
    *(undefined *)((int)puVar2 + 0xb) = 0;
    FUN_00305a20(puVar2 + 5,param_1);
    puVar2[3] = 4;
    puVar2[4] = param_2;
    puVar2[0x45] = 0;
    puVar2[1] = param_3;
    *(undefined *)(puVar2 + 2) = 0;
    if (param_4 != 0) {
      *(undefined *)((int)puVar2 + 10) = 1;
      puVar2[0x45] = param_4;
    }
    uVar1 = DAT_00324f40;
    *(undefined *)((int)puVar2 + 0xb) = param_5;
    FUN_00306e40(uVar1,puVar2);
  }
  return puVar2;
}

