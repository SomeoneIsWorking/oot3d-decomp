// OoT3D decomp @ 0041f360  name=FUN_0041f360  size=300

uint FUN_0041f360(void)

{
  bool bVar1;
  undefined4 uVar2;
  uint *puVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined4 *puVar6;
  uint uVar7;
  uint uVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;

  uVar2 = DAT_0041f490;
  if ((code *)*DAT_0041f48c == (code *)0x0) {
    puVar4 = (undefined4 *)0x0;
  }
  else {
    puVar4 = (undefined4 *)(*(code *)*DAT_0041f48c)(0x10000,0x100,0,DAT_0041f490);
  }
  FUN_00343280(puVar4,uVar2);
  puVar3 = DAT_0041f494;
  uVar7 = *DAT_0041f494;
  uVar8 = DAT_0041f494[2];
  do {
    iVar5 = uVar8 + (uVar7 & 0x1ff) * 4;
    puVar9 = *(undefined4 **)(iVar5 + 8);
    if (puVar9 == (undefined4 *)0x0) {
      puVar4[1] = uVar7;
      *puVar4 = 0;
      iVar5 = uVar8 + (uVar7 & 0x1ff) * 4;
LAB_0041f408:
      *(undefined4 **)(iVar5 + 8) = puVar4;
LAB_0041f474:
      *puVar3 = uVar7 + 1;
      return uVar7;
    }
    if (puVar9[1] != uVar7) {
      if ((uint)puVar9[1] <= uVar7) {
        bVar1 = false;
        puVar6 = (undefined4 *)*puVar9;
        puVar10 = puVar9;
        if ((undefined4 *)*puVar9 != (undefined4 *)0x0) {
          do {
            puVar9 = puVar6;
            if (puVar9[1] == uVar7) {
              bVar1 = true;
              puVar6 = puVar9;
              puVar9 = puVar10;
              break;
            }
            if (uVar7 <= (uint)puVar9[1]) {
              puVar4[1] = uVar7;
              *puVar10 = puVar4;
              *puVar4 = puVar9;
              goto LAB_0041f474;
            }
            puVar6 = (undefined4 *)*puVar9;
            puVar10 = puVar9;
          } while (puVar6 != (undefined4 *)0x0);
          if (bVar1 || puVar6 != (undefined4 *)0x0) goto LAB_0041f484;
        }
        *puVar9 = puVar4;
        puVar4[1] = uVar7;
        *puVar4 = 0;
        goto LAB_0041f474;
      }
      puVar4[1] = uVar7;
      *puVar4 = *(undefined4 *)(uVar8 + (uVar7 & 0x1ff) * 4 + 8);
      goto LAB_0041f408;
    }
LAB_0041f484:
    uVar7 = uVar7 + 1;
  } while( true );
}
