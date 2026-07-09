// OoT3D decomp @ 00303960  name=FUN_00303960  size=148

undefined4 * FUN_00303960(undefined4 param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  
  if ((code *)*puRam003039f4 == (code *)0x0) {
    puVar3 = (undefined4 *)0x0;
  }
  else {
    puVar3 = (undefined4 *)(*(code *)*puRam003039f4)(0x10000,0x100,0,0x78);
  }
  if (puVar3 != (undefined4 *)0x0) {
    FUN_00343280(puVar3,0x78);
    uVar2 = uRam003039fc;
    puVar3[1] = 0x2600;
    *puVar3 = 0x2600;
    uVar1 = uRam003039f8;
    puVar3[2] = uRam003039f8;
    puVar3[3] = uVar1;
    puVar3[9] = uVar2;
    puVar3[8] = uVar2;
    puVar3[7] = uVar2;
    puVar3[6] = uVar2;
    puVar3[10] = uVar2;
    puVar3[0xb] = 0;
    puVar3[5] = 0xfffffc18;
    puVar3[0x1d] = param_1;
  }
  return puVar3;
}

