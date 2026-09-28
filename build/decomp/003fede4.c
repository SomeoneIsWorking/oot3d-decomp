// OoT3D decomp @ 003fede4  name=FUN_003fede4  size=456

undefined4 *
FUN_003fede4(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  uint *puVar4;
  undefined4 *puVar5;
  int iVar6;

  puVar5 = puRam003fefbc;
  puVar4 = puRam003fefb8;
  uVar3 = uRam003fefb4;
  uVar2 = uRam003fefb0;
  uVar1 = uRam003fefac;
  param_1[3] = param_5;
  param_1[6] = 0;
  param_1[1] = param_2;
  param_1[2] = param_4;
  param_1[5] = param_3;
  *param_1 = uVar1;
  param_1[7] = 0;
  *(undefined1 *)(param_1 + 0x2b) = 0;
  *(undefined1 *)((int)param_1 + 0xad) = 1;
  param_1[9] = uVar2;
  param_1[10] = uVar2;
  param_1[0xb] = uVar2;
  param_1[0xc] = uVar3;
  param_1[0xd] = uVar2;
  param_1[0xe] = uVar2;
  param_1[0xf] = uVar2;
  param_1[0x10] = uVar3;
  param_1[0x11] = uVar3;
  param_1[0x12] = uVar3;
  if (((*puVar4 & 1) == 0) && (iVar6 = func_0x003679b4(puVar4), iVar6 != 0)) {
    *puVar5 = uVar3;
    puVar5[1] = uVar2;
    puVar5[2] = uVar2;
    puVar5[3] = uVar2;
    puVar5[4] = uVar2;
    puVar5[5] = uVar3;
    puVar5[6] = uVar2;
    puVar5[7] = uVar2;
    puVar5[8] = uVar2;
    puVar5[9] = uVar2;
    puVar5[10] = uVar3;
    puVar5[0xb] = uVar2;
  }
  func_0x00372224(param_1 + 0x13,puRam003fefbc);
  if (((*puVar4 & 1) == 0) && (iVar6 = func_0x003679b4(puRam003fefb8), iVar6 != 0)) {
    *puVar5 = uVar3;
    puVar5[1] = uVar2;
    puVar5[2] = uVar2;
    puVar5[3] = uVar2;
    puVar5[4] = uVar2;
    puVar5[5] = uVar3;
    puVar5[6] = uVar2;
    puVar5[7] = uVar2;
    puVar5[8] = uVar2;
    puVar5[9] = uVar2;
    puVar5[10] = uVar3;
    puVar5[0xb] = uVar2;
  }
  func_0x00372224(param_1 + 0x1f,puRam003fefbc);
  return param_1;
}
