// OoT3D decomp @ 00485cc8  name=FUN_00485cc8  size=152

undefined4 * FUN_00485cc8(int param_1,int param_2,undefined4 param_3)

{
  undefined4 uVar1;
  uint uVar2;
  undefined4 *puVar3;

  uVar2 = param_2 + param_1 & 0xfffffffc;
  puVar3 = (undefined4 *)(param_1 + 3U & 0xfffffffc);
  if (((int)((int)puVar3 - uVar2) < 1) && (0x33 < uVar2 - (int)puVar3)) {
    if (puVar3 != (undefined4 *)0x0) {
      puVar3[1] = 0;
      uVar1 = DAT_00485d60;
      puVar3[2] = 0;
      puVar3[6] = 0;
      puVar3[7] = puVar3 + 7;
      *puVar3 = uVar1;
      puVar3[8] = puVar3 + 7;
    }
    FUN_0048a53c(puVar3,DAT_00485d64,puVar3 + 0xd,uVar2,param_3);
    puVar3[10] = puVar3[3];
    puVar3[0xb] = puVar3[4];
    puVar3[0xc] = 0;
    return puVar3;
  }
  return (undefined4 *)0x0;
}
