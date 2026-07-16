// OoT3D decomp @ 00408828  name=FUN_00408828  size=624

void FUN_00408828(int param_1,float *param_2,int param_3,undefined4 param_4,uint param_5,
                 uint param_6)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  uint uVar4;
  int iVar5;
  undefined1 *puVar6;
  uint uVar7;
  int iStack_ca4;
  undefined1 auStack_ca0 [12];
  float afStack_c94 [4];
  float afStack_c84 [4];
  float afStack_c74 [757];
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined1 auStack_70 [12];
  float fStack_64;
  float fStack_54;
  float fStack_44;
  
  uVar1 = uRam00408a9c;
  if (((*puRam00408a98 & 1) == 0) &&
     (iVar5 = func_0x003679b4(puRam00408a98), puVar3 = puRam00408aa4, uVar2 = uRam00408aa0,
     iVar5 != 0)) {
    *puRam00408aa4 = uRam00408aa0;
    puVar3[1] = uVar1;
    puVar3[2] = uVar1;
    puVar3[3] = uVar1;
    puVar3[4] = uVar1;
    puVar3[5] = uVar2;
    puVar3[6] = uVar1;
    puVar3[7] = uVar1;
    puVar3[8] = uVar1;
    puVar3[9] = uVar1;
    puVar3[10] = uVar2;
    puVar3[0xb] = uVar1;
  }
  func_0x00372224(auStack_70,puRam00408aa4);
  func_0x003679d0(*(undefined4 *)(param_3 + 0x28),
                  *(float *)(param_3 + 0x2c) +
                  *(float *)(param_3 + 0xc4) * *(float *)(param_3 + 0x58),
                  *(undefined4 *)(param_3 + 0x30),auStack_70,param_3 + 0xbc);
  uStack_a0 = *(undefined4 *)(param_3 + 0x54);
  uStack_9c = 0;
  uStack_98 = 0;
  uStack_94 = 0;
  uStack_90 = 0;
  uStack_8c = *(undefined4 *)(param_3 + 0x58);
  uStack_88 = 0;
  uStack_84 = 0;
  uStack_80 = 0;
  uStack_7c = 0;
  uStack_78 = *(undefined4 *)(param_3 + 0x5c);
  uStack_74 = 0;
  func_0x0036c174(auStack_70,auStack_70,&uStack_a0);
  if ((param_6 & 1) == 0) {
    *(undefined4 *)(param_1 + 4) = uVar1;
  }
  if ((param_6 & 2) == 0) {
    *(undefined4 *)(param_1 + 8) = uVar1;
  }
  if ((param_6 & 4) == 0) {
    *(undefined4 *)(param_1 + 0xc) = uVar1;
  }
  uVar4 = uRam00408aa8;
  uVar7 = 0;
  if (*(char *)(param_1 + 0x84) != '\0') {
    do {
      func_0x003255d0(&iStack_ca4,*(undefined4 *)(param_1 + 0x38),uVar7);
      iVar5 = *(int *)(param_1 + 0x88) + uVar7 * 0x34;
      if ((uVar7 == *(byte *)(param_1 + 0x85)) && ((param_6 & 7) != 0)) {
        if ((param_6 & 1) != 0) {
          *(undefined4 *)(param_1 + 4) = *(undefined4 *)(iVar5 + 0xc);
          *(undefined4 *)(iVar5 + 0xc) = uVar1;
        }
        if ((param_6 & 2) != 0) {
          *(undefined4 *)(param_1 + 8) = *(undefined4 *)(iVar5 + 0x1c);
          *(undefined4 *)(iVar5 + 0x1c) = uVar1;
        }
        if ((param_6 & 4) != 0) {
          *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(iVar5 + 0x2c);
          *(undefined4 *)(iVar5 + 0x2c) = uVar1;
        }
      }
      puVar6 = auStack_70;
      if (*(ushort *)(iStack_ca4 + 2) != uVar4) {
        puVar6 = auStack_ca0 + (uint)*(ushort *)(iStack_ca4 + 2) * 0x30;
      }
      func_0x0036c174(auStack_ca0 + uVar7 * 0x30,puVar6);
      if (uVar7 == param_5) {
        *param_2 = afStack_c94[uVar7 * 0xc] - fStack_64;
        param_2[1] = afStack_c84[uVar7 * 0xc] - fStack_54;
        param_2[2] = afStack_c74[uVar7 * 0xc] - fStack_44;
        return;
      }
      uVar7 = uVar7 + 1;
    } while ((int)uVar7 < (int)(uint)*(byte *)(param_1 + 0x84));
  }
  return;
}

