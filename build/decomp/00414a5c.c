// OoT3D decomp @ 00414a5c  name=FUN_00414a5c  size=196

void FUN_00414a5c(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  uint uVar5;
  int iVar6;
  undefined4 *puVar7;
  bool bVar8;

  puVar2 = DAT_00414b28;
  iVar6 = *DAT_00414b20;
  *param_1 = 0x1c00;
  puVar1 = DAT_00414b24;
  puVar7 = (undefined4 *)(*(uint *)(iVar6 + 0x670) & 0xffffdfff | 0x11000);
  *(undefined4 **)(iVar6 + 0x670) = puVar7;
  puVar4 = (undefined4 *)*puVar1;
  if (puVar4 < (undefined4 *)*puVar2) {
    *puVar4 = puVar7;
    puVar7 = DAT_00414b2c;
    puVar4[1] = DAT_00414b2c;
    *puVar1 = puVar4 + 2;
  }
  uVar3 = DAT_00414b30;
  uVar5 = 1;
  do {
    if (uVar5 == 0xc) {
      puVar4 = (undefined4 *)*puVar1;
      puVar7 = puVar4;
      if (puVar4 < (undefined4 *)*puVar2) {
        puVar7 = puVar4 + 2;
        *puVar4 = 0xff0000;
        puVar4[1] = uVar3;
        *puVar1 = puVar7;
      }
    }
    else {
      bVar8 = 0xe < uVar5;
      if (uVar5 != 0xf) {
        puVar7 = (undefined4 *)*puVar1;
        bVar8 = (undefined4 *)*puVar2 <= puVar7;
      }
      if (!bVar8) {
        *puVar7 = 0;
        puVar7[1] = uVar5 + 0x80 | 0xf0000;
        *puVar1 = puVar7 + 2;
        puVar7 = puVar7 + 2;
      }
    }
    uVar5 = uVar5 + 1;
  } while ((int)uVar5 < 0x1f);
  return;
}
