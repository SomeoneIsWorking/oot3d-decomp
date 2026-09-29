// OoT3D decomp @ 002eb72c  name=FUN_002eb72c  size=852

void FUN_002eb72c(int param_1,int param_2)

{
  byte bVar1;
  char cVar2;
  uint *puVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int extraout_r1;
  int iVar7;
  int extraout_r1_00;
  int extraout_r1_01;
  uint unaff_r4;
  undefined8 uVar8;
  float local_24;
  float local_20;

  puVar3 = DAT_002eba80;
  iVar6 = param_2;
  if ((*DAT_002eba80 & 1) == 0) {
    uVar8 = FUN_003679b4(DAT_002eba80);
    iVar6 = (int)((ulonglong)uVar8 >> 0x20);
    if ((int)uVar8 != 0) {
      FUN_0036788c(DAT_002eba84);
      iVar6 = DAT_002eba8c;
    }
  }
  iVar4 = DAT_002eba90;
  if (param_1 == -1) {
    param_1 = 0;
  }
  if ((*puVar3 & 1) == 0) {
    uVar8 = FUN_003679b4(DAT_002eba80,iVar6);
    iVar6 = (int)((ulonglong)uVar8 >> 0x20);
    if ((int)uVar8 != 0) {
      FUN_0036788c(DAT_002eba84);
      iVar6 = DAT_002eba8c;
    }
  }
  FUN_0031025c(DAT_002eba84,iVar6);
  iVar6 = DAT_002eba94;
  if (param_2 == -1) {
    FUN_002e9b00(0xffffffff);
    iVar6 = extraout_r1;
    if ((*puVar3 & 1) == 0) {
      uVar8 = FUN_003679b4(DAT_002eba80);
joined_r0x002eb92c:
      iVar6 = (int)((ulonglong)uVar8 >> 0x20);
      if ((int)uVar8 != 0) {
        FUN_0036788c(DAT_002eba84);
        iVar6 = DAT_002eba8c;
      }
    }
LAB_002eb930:
    FUN_002e9a1c(iVar4,iVar6);
  }
  else {
    if (*(int *)(DAT_002eba94 + 0x38) < 2) {
      if (*(int *)(DAT_002eba98 + 4) == 0) {
        bVar1 = *(byte *)(DAT_002eba98 + param_1 + 0x13a2);
      }
      else {
        bVar1 = *(byte *)(DAT_002eba98 + param_1 + 0x138a);
      }
      if (bVar1 == 0xff) {
        iVar5 = DAT_002eba98 + *(int *)(DAT_002eba94 + 0x68);
        if (*(int *)(DAT_002eba98 + 4) == 0) {
          cVar2 = *(char *)(iVar5 + 0x13a2);
        }
        else {
          cVar2 = *(char *)(iVar5 + 0x138a);
        }
        if (cVar2 != -1) {
          FUN_002eb304(*(int *)(DAT_002eba94 + 0x68),&local_20,&local_24);
          FUN_002f8d40(*(undefined4 *)(iVar6 + 0x3c),*(undefined4 *)(iVar6 + 0x68),(int)local_20,
                       (int)local_24,0x2a,0x2a);
        }
        FUN_002e9b00(0xffffffff);
        iVar6 = extraout_r1_00;
        if ((*puVar3 & 1) == 0) {
          uVar8 = FUN_003679b4(DAT_002eba80);
          goto joined_r0x002eb92c;
        }
        goto LAB_002eb930;
      }
      unaff_r4 = (uint)*(byte *)((uint)bVar1 + DAT_002eba98 + 0x8c);
    }
    else {
      iVar5 = *(int *)(DAT_002eba94 + 0x9c);
      iVar7 = *(int *)(DAT_002eba94 + 0xa0);
      if (iVar5 == 0 && iVar7 == 0) {
        unaff_r4 = 0x7a;
      }
      if (iVar5 == 1) {
        if (iVar7 == 0) {
          unaff_r4 = 4;
        }
        else {
LAB_002eb880:
          if (iVar7 == 1) {
            unaff_r4 = 0x12;
          }
        }
      }
      else if (iVar5 == 0) {
        if (iVar7 == 1) {
          unaff_r4 = 0xc;
        }
      }
      else if (iVar5 == 1) goto LAB_002eb880;
    }
    if ((*(uint *)(DAT_002eba94 + 0x6c) != unaff_r4 || param_2 != 0) && (unaff_r4 != 0xff)) {
      iVar5 = DAT_002eba98 + *(int *)(DAT_002eba94 + 0x68);
      if (*(int *)(DAT_002eba98 + 4) == 0) {
        cVar2 = *(char *)(iVar5 + 0x13a2);
      }
      else {
        cVar2 = *(char *)(iVar5 + 0x138a);
      }
      if (cVar2 != -1) {
        FUN_002eb304(*(int *)(DAT_002eba94 + 0x68),&local_20,&local_24);
        FUN_002f8d40(*(undefined4 *)(iVar6 + 0x3c),*(undefined4 *)(iVar6 + 0x68),(int)local_20,
                     (int)local_24,0x2a,0x2a);
      }
      *(undefined4 *)(iVar6 + 0x68) = *(undefined4 *)(iVar6 + 100);
      *(uint *)(iVar6 + 0x6c) = unaff_r4;
      FUN_002e9b00(unaff_r4);
      iVar6 = extraout_r1_01;
      if ((*puVar3 & 1) == 0) {
        uVar8 = FUN_003679b4(DAT_002eba80);
        iVar6 = (int)((ulonglong)uVar8 >> 0x20);
        if ((int)uVar8 != 0) {
          FUN_0036788c(DAT_002eba84);
          iVar6 = DAT_002eba8c;
        }
      }
      FUN_002e9a1c(iVar4,iVar6);
      FUN_002e9a3c(iVar4,unaff_r4 + 0x700,1);
      if (((*puVar3 & 1) == 0) && (iVar6 = FUN_003679b4(DAT_002eba80), iVar6 != 0)) {
        FUN_0036788c(DAT_002eba84);
      }
      *(undefined1 *)(iVar4 + 0xd) = 1;
      return;
    }
  }
  return;
}
