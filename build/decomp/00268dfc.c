// OoT3D decomp @ 00268dfc  name=FUN_00268dfc  size=1092

void FUN_00268dfc(int param_1,int param_2)

{
  char cVar1;
  undefined4 uVar2;
  float fVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 uVar7;
  short sVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  bool bVar13;
  float fVar14;

  uVar2 = DAT_00269200;
  if (*(int *)(param_1 + 0x7d8) != DAT_002691fc) {
    if ((*(byte *)(param_1 + 0x7f4) & 2) != 0) {
      *(byte *)(param_1 + 0x7f4) = *(byte *)(param_1 + 0x7f4) & 0xfd;
      fVar3 = DAT_00269208;
      fVar14 = *(float *)(param_1 + 0x6c) * DAT_00269204;
      *(float *)(param_1 + 0x6c) = fVar14;
      if ((uint)fVar14 < (uint)fVar3) {
        fVar14 = DAT_0026920c;
      }
      *(float *)(param_1 + 0x6c) = fVar14;
      *(undefined4 *)(param_1 + 100) = uVar2;
      FUN_0036f44c(param_1);
    }
    iVar6 = DAT_00269218;
    uVar5 = DAT_00269214;
    uVar4 = DAT_00269210;
    if ((*(byte *)(param_1 + 0x7f5) & 2) != 0) {
      *(byte *)(param_1 + 0x7f5) = *(byte *)(param_1 + 0x7f5) & 0xfd;
      FUN_00375fd0(param_1,param_1 + 0x7fc,1);
      cVar1 = *(char *)(param_1 + 0xb9);
      bVar13 = cVar1 == '\0';
      if (bVar13) {
        cVar1 = *(char *)(param_1 + 0xb8);
      }
      if ((!bVar13 || cVar1 != '\0') && (*(char *)(param_1 + 0x7f8) != '\f')) {
        bVar13 = DAT_0026921c <= *(int *)(param_1 + 0x54);
        if ((!bVar13) && ((**(uint **)(param_1 + 0x820) & 0x80) != 0)) {
          *(undefined1 *)(param_1 + 0xb8) = 2;
          *(undefined1 *)(param_1 + 0xb9) = 0;
        }
        iVar9 = FUN_00375eb8(param_1);
        if (iVar9 == 0) {
          if (bVar13) {
            FUN_00375bcc(param_1,DAT_00269224);
          }
          else {
            FUN_00375bcc(param_1,DAT_00269220);
          }
          FUN_00375b70(param_2,param_1);
          *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) & 0xfffffffe;
        }
        else if (*(char *)(param_1 + 0xb8) != '\0') {
          FUN_00375bcc(param_1,DAT_00269228);
        }
        iVar9 = DAT_00269230;
        uVar7 = DAT_0026922c;
        cVar1 = *(char *)(param_1 + 0xb9);
        if (cVar1 == '\x04' || cVar1 == '\x01') {
          if (*(int *)(param_1 + 0x7d8) != DAT_00269230) {
            FUN_00375c08(DAT_00269234,uVar5,uVar4,DAT_0026922c,param_1 + 0x1a4,2);
            *(undefined4 *)(param_1 + 0x6c) = uVar5;
            if (*(char *)(param_1 + 0xb9) == '\x04') {
              FUN_00375ed8(param_1,0x800000,0xff,0,0x50);
            }
            else {
              FUN_00375ed8(param_1,0,0xff,0,0x50);
              FUN_00375bcc(*(undefined4 *)(param_1 + 0x54),param_1,DAT_0026923c,DAT_00269238);
            }
            *(undefined2 *)(param_1 + 0x7dc) = 0x78;
            *(int *)(param_1 + 0x7d8) = iVar9;
          }
        }
        else {
          if (cVar1 == '\x02') {
            iVar9 = (int)(short)(int)(*(float *)(param_1 + 0x54) * DAT_00269240);
            FUN_00330254(param_2,param_1,param_1 + 0x28,iVar9,iVar9);
          }
          FUN_00374a58(uVar7,param_1 + 0x1a4,0);
          if ((**(uint **)(param_1 + 0x820) & DAT_00269244) == 0) {
            sVar8 = FUN_0036e800(param_1,*(undefined4 *)(param_1 + 0x7ec));
            *(short *)(param_1 + 0x36) = sVar8 + -0x8000;
          }
          else {
            *(undefined2 *)(param_1 + 0x36) = *(undefined2 *)(*(int *)(param_1 + 0x7ec) + 0x36);
          }
          FUN_00375ed8(param_1,0x400000,0xff,0,0x14);
          uVar7 = DAT_00269248;
          *(undefined4 *)(param_1 + 0x6c) = uVar2;
          *(undefined4 *)(param_1 + 100) = uVar7;
          *(int *)(param_1 + 0x7d8) = iVar6;
        }
      }
    }
    (**(code **)(param_1 + 0x7d8))(param_1,param_2);
    if (*(int *)(param_1 + 0x7d8) != iVar6) {
      *(undefined2 *)(param_1 + 0x36) = *(undefined2 *)(param_1 + 0xbe);
    }
    iVar9 = DAT_0026924c;
    if (*(int *)(param_1 + 0x7d8) != DAT_0026924c) {
      FUN_00376864(param_1);
    }
    FUN_00376340(uVar4,*(float *)(param_1 + 0x54) * DAT_00269250,uVar5,param_2,param_1,0x1d);
    iVar11 = param_1 + 0x7e4;
    FUN_0037632c(param_1);
    iVar12 = param_2 + 0x5c78;
    if (*(int *)(param_1 + 0x7d8) == DAT_00269254) {
      *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) | 0x1000000;
      FUN_003761f0(param_2,iVar12,iVar11);
    }
    iVar10 = *(int *)(param_1 + 0x7d8);
    if (iVar10 != iVar9) {
      if ((iVar10 != DAT_00269258 && iVar10 != iVar6) && (*(short *)(param_1 + 0x118) == 0)) {
        FUN_00376168(param_2,iVar12,iVar11);
      }
      if ((*(int *)(param_1 + 0x7d8) != DAT_0026925c) || (*(int *)(param_1 + 0x1e0) < DAT_00269260))
      {
        FUN_003762a4(param_2,iVar12,iVar11);
      }
    }
    FUN_0037322c(*(float *)(param_1 + 0x54) * DAT_00269264,param_1);
    if ((*(char *)(param_1 + 0x7f8) == '\f') &&
       ((*(short *)(param_1 + 0x7de) == 0 ||
        (sVar8 = *(short *)(param_1 + 0x7de) + -1, *(short *)(param_1 + 0x7de) = sVar8, sVar8 == 0))
       )) {
      *(undefined2 *)(param_1 + 0x7de) = 0x28;
    }
  }
  return;
}
