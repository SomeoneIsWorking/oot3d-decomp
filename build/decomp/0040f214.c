// OoT3D decomp @ 0040f214  name=FUN_0040f214  size=216

byte * FUN_0040f214(short *param_1,uint param_2)

{
  short sVar1;
  uint uVar2;
  uint *puVar3;
  uint uVar4;

  sVar1 = *param_1;
  puVar3 = (uint *)(*(int *)(param_1 + 2) + (int)param_1);
  if (sVar1 == 0x6000) {
    uVar2 = puVar3[1];
LAB_0040f2c8:
    return (byte *)(uVar2 + (int)puVar3);
  }
  if (sVar1 == 0x6001) {
    uVar4 = *puVar3;
    uVar2 = 0;
    if (uVar4 != 0) {
      do {
        if (param_2 <= *(byte *)((int)puVar3 + uVar2 + 4)) {
          uVar2 = *(uint *)((int)puVar3 + (uVar4 + 3 & 0xfffffffc) + uVar2 * 8 + 8);
          goto LAB_0040f2c8;
        }
        uVar2 = uVar2 + 1;
      } while (uVar2 < uVar4);
    }
  }
  else if (((sVar1 == 0x6002) && ((byte)*puVar3 <= param_2)) &&
          (param_2 <= *(byte *)((int)puVar3 + 1))) {
    return (byte *)(puVar3[(param_2 - (byte)*puVar3) * 2 + 2] + (int)puVar3);
  }
  return (byte *)0x0;
}
