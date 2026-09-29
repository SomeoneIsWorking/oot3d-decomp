// OoT3D decomp @ 0030266c  name=FUN_0030266c  size=12

void FUN_0030266c(int param_1)

{
  uint *puVar1;
  uint *puVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  code *in_r12;
  code *extraout_r12;
  code *extraout_r12_00;

  iVar4 = DAT_003027cc;
  iVar3 = DAT_003027c8;
  iVar7 = 0;
  do {
    uVar5 = *(uint *)(param_1 + 4 + iVar7 * 4);
    if (uVar5 != 0) {
      puVar1 = (uint *)0x0;
      for (puVar2 = *(uint **)(iVar3 + (uVar5 & 0x1f) * 4 + 0x1c); puVar2 != (uint *)0x0;
          puVar2 = (uint *)puVar2[0xe]) {
        if (uVar5 <= *puVar2) {
          if ((puVar2 != (uint *)0x0) && (*puVar2 == uVar5)) {
            if (*(uint **)(iVar3 + 0xa0) == puVar2) {
              *(undefined4 *)(iVar3 + 0xa0) = 0;
              *(undefined1 *)(iVar3 + 0x12) = 0;
            }
            if (*(uint **)(iVar3 + 0x9c) == puVar2) {
              *DAT_003027d0 = 0;
              *DAT_003027d4 = 0;
              *(undefined4 *)(iVar3 + 0x9c) = 0;
            }
            if (puVar2[1] != 0) {
              in_r12 = *(code **)(iVar4 + 4);
            }
            if (puVar2[1] != 0 && in_r12 != (code *)0x0) {
              (*in_r12)(0x10000,DAT_003027d8,*puVar2);
              in_r12 = extraout_r12;
            }
            if (puVar2[6] != 0) {
              in_r12 = *(code **)(iVar4 + 4);
            }
            if (puVar2[6] != 0 && in_r12 != (code *)0x0) {
              (*in_r12)(0x10000,0x100,0);
            }
            uVar5 = *(uint *)(param_1 + 4 + iVar7 * 4);
            if (uVar5 < *(uint *)(iVar4 + 8)) {
              *(uint *)(iVar4 + 8) = uVar5;
            }
            if (puVar1 == (uint *)0x0) {
              iVar6 = iVar3 + (uVar5 & 0x1f) * 4;
              *(undefined4 *)(iVar6 + 0x1c) = *(undefined4 *)(*(int *)(iVar6 + 0x1c) + 0x38);
            }
            else {
              puVar1[0xe] = puVar2[0xe];
            }
            in_r12 = *(code **)(iVar4 + 4);
            if (in_r12 != (code *)0x0) {
              (*in_r12)(0x10000,0x100,0,puVar2);
              in_r12 = extraout_r12_00;
            }
          }
          break;
        }
        puVar1 = puVar2;
      }
    }
    iVar7 = iVar7 + 1;
    if (1 < iVar7) {
      return;
    }
  } while( true );
}
