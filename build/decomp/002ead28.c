// OoT3D decomp @ 002ead28  name=FUN_002ead28  size=648

uint FUN_002ead28(uint *param_1,uint *param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  code *pcVar4;
  uint uVar5;
  int iVar6;
  uint *puVar7;

  iVar1 = DAT_002eafb0;
  param_1[8] = 0;
  while (uVar2 = (*(code *)param_1[3])(param_1), uVar2 != 0) {
    if (uVar2 == 0x25) {
      uVar5 = 0;
      while (((uVar2 = (*(code *)param_1[3])(param_1), 0x1f < (int)uVar2 && (uVar2 < 0x31)) &&
             ((byte)FUN_002ead28[iVar1 + uVar2] != 0))) {
        uVar5 = uVar5 | (byte)FUN_002ead28[iVar1 + uVar2];
      }
      iVar6 = 0;
      param_1[7] = 0;
      if ((uVar5 & 2) != 0) {
        uVar5 = uVar5 & 0xfffffffb;
      }
      param_1[6] = 0;
      puVar7 = param_2;
      do {
        if (uVar2 == 0x2a) {
          param_2 = puVar7 + 1;
          param_1[iVar6 + 6] = *puVar7;
          uVar2 = (*(code *)param_1[3])(param_1);
          puVar7 = param_2;
          if (iVar6 == 1) {
            if ((int)param_1[7] < 0) {
              uVar5 = uVar5 & 0xffffffdf;
            }
            break;
          }
        }
        else {
          uVar3 = uVar2 - 0x30;
          if (uVar3 < 10) {
            while( true ) {
              param_1[iVar6 + 6] = uVar3;
              uVar2 = (*(code *)param_1[3])(param_1);
              if (9 < uVar2 - 0x30) break;
              uVar3 = (uVar2 + param_1[iVar6 + 6] * 10) - 0x30;
            }
          }
          param_2 = puVar7;
          if (iVar6 == 1) break;
        }
        param_2 = puVar7;
        if (uVar2 != 0x2e) break;
        uVar2 = (*(code *)param_1[3])(param_1);
        iVar6 = iVar6 + 1;
        uVar5 = uVar5 | 0x20;
      } while (iVar6 < 2);
      if ((int)param_1[6] < 0) {
        uVar5 = uVar5 | 1;
        param_1[6] = -param_1[6];
      }
      if ((uVar5 & 1) != 0) {
        uVar5 = uVar5 & 0xffffffef;
      }
      if (uVar2 == 0x6c || uVar2 == 0x68) {
        uVar3 = (*(code *)param_1[3])(param_1);
        if (uVar3 == uVar2) {
          if (uVar2 == 0x6c) {
LAB_002eaf28:
            uVar2 = 0x80;
          }
          else {
            uVar2 = 0x400;
          }
          goto LAB_002eaed4;
        }
        if (uVar2 == 0x6c) {
          uVar2 = 0x40;
        }
        else {
          uVar2 = 0x100;
        }
        uVar5 = uVar5 | uVar2;
        uVar2 = uVar3;
      }
      else {
        if (uVar2 != 0x4c) {
          if (uVar2 == 0x6a) goto LAB_002eaf28;
          if (uVar2 != 0x74 && uVar2 != 0x7a) goto LAB_002eaf30;
        }
        uVar2 = 0;
LAB_002eaed4:
        uVar5 = uVar5 | uVar2;
        uVar2 = (*(code *)param_1[3])(param_1);
      }
LAB_002eaf30:
      if (uVar2 == 0) break;
      if (uVar2 - 0x41 < 0x1a) {
        uVar5 = uVar5 | 0x800;
        uVar2 = uVar2 + 0x20;
      }
      *param_1 = uVar5;
      iVar6 = FUN_004c974c(param_1,uVar2,param_2);
      if (iVar6 == 0) {
        uVar5 = param_1[2];
        pcVar4 = (code *)param_1[1];
        goto LAB_002eaf88;
      }
      if (iVar6 == 1) {
        param_2 = param_2 + 1;
      }
      else {
        param_2 = (uint *)(((int)param_2 + 7U & 0xfffffff8) + 8);
      }
    }
    else {
      uVar5 = param_1[2];
      pcVar4 = (code *)param_1[1];
LAB_002eaf88:
      (*pcVar4)(uVar2,uVar5);
      param_1[8] = param_1[8] + 1;
    }
  }
  return param_1[8];
}
