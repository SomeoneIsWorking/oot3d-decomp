// OoT3D decomp @ 0030ff04  name=FUN_0030ff04  size=288

void FUN_0030ff04(int param_1,int param_2)

{
  uint *puVar1;
  uint *puVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  code *in_r12;
  code *extraout_r12;

  iVar4 = DAT_00310028;
  iVar3 = DAT_00310024;
  iVar8 = 0;
  if (0 < param_1) {
    do {
      uVar5 = *(uint *)(param_2 + iVar8 * 4);
      if (uVar5 != 0) {
        puVar1 = (uint *)0x0;
        for (puVar2 = *(uint **)(iVar3 + (uVar5 & 0x1f) * 4 + 0xa4); puVar2 != (uint *)0x0;
            puVar2 = (uint *)puVar2[6]) {
          uVar7 = *puVar2;
          if (uVar5 <= uVar7) {
            if ((puVar2 != (uint *)0x0) && (uVar7 == uVar5)) {
              if (puVar2[1] != 0) {
                in_r12 = *(code **)(iVar4 + 4);
              }
              if (puVar2[1] != 0 && in_r12 != (code *)0x0) {
                (*in_r12)(puVar2[5],0x104,uVar7);
              }
              uVar5 = *(uint *)(param_2 + iVar8 * 4);
              if (uVar5 < *(uint *)(iVar4 + 0xc)) {
                *(uint *)(iVar4 + 0xc) = uVar5;
              }
              if (puVar1 == (uint *)0x0) {
                iVar6 = iVar3 + (uVar5 & 0x1f) * 4;
                *(undefined4 *)(iVar6 + 0xa4) = *(undefined4 *)(*(int *)(iVar6 + 0xa4) + 0x18);
              }
              else {
                puVar1[6] = puVar2[6];
              }
              if (*(uint **)(iVar3 + 0x128) == puVar2) {
                *(undefined4 *)(iVar3 + 0x128) = 0;
              }
              if (*(uint **)(iVar3 + 300) == puVar2) {
                *(undefined4 *)(iVar3 + 300) = 0;
              }
              if (*(uint **)(iVar3 + 0x130) == puVar2) {
                *(undefined4 *)(iVar3 + 0x130) = 0;
              }
              in_r12 = *(code **)(iVar4 + 4);
              if (in_r12 != (code *)0x0) {
                (*in_r12)(0x10000,0x100,0,puVar2);
                in_r12 = extraout_r12;
              }
            }
            break;
          }
          puVar1 = puVar2;
        }
      }
      iVar8 = iVar8 + 1;
    } while (iVar8 < param_1);
  }
  return;
}
