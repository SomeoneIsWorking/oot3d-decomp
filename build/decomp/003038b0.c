// OoT3D decomp @ 003038b0  name=FUN_003038b0  size=164

undefined4 * FUN_003038b0(undefined4 param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int iVar5;

  if ((code *)*DAT_00303954 == (code *)0x0) {
    puVar3 = (undefined4 *)0x0;
  }
  else {
    puVar3 = (undefined4 *)(*(code *)*DAT_00303954)(0x10000,0x100,0,0x1cc);
  }
  if (puVar3 != (undefined4 *)0x0) {
    FUN_00343280(puVar3,0x1cc);
    puVar3[1] = 0x2600;
    *puVar3 = 0x2600;
    uVar2 = DAT_0030395c;
    uVar1 = DAT_00303958;
    puVar4 = puVar3 + 0xc;
    puVar3[2] = DAT_00303958;
    puVar3[3] = uVar1;
    puVar3[10] = uVar2;
    puVar3[9] = uVar2;
    puVar3[8] = uVar2;
    puVar3[7] = uVar2;
    puVar3[6] = uVar2;
    puVar3[0xb] = 0;
    iVar5 = 3;
    puVar3[5] = 0xfffffc18;
    do {
      puVar4[0x11] = param_1;
      iVar5 = iVar5 + -1;
      puVar4 = puVar4 + 0x22;
      *puVar4 = param_1;
    } while (iVar5 != 0);
  }
  return puVar3;
}
