// OoT3D decomp @ 003f1b28  name=FUN_003f1b28  size=532

void FUN_003f1b28(int param_1,int param_2)

{
  short sVar1;
  int iVar2;
  float fVar3;
  uint uVar4;
  int iVar5;
  undefined1 uVar6;
  int iVar7;
  int iVar8;
  float fVar9;
  float local_38;
  float local_34;
  float local_30;

  iVar7 = *(int *)(param_2 + 0x20ac);
  uVar4 = ((uint)*(ushort *)(param_1 + 0x1c) << 0x16) >> 0x1d;
  FUN_0036c5d8(param_1,&local_38,iVar7 + 0x28);
  iVar5 = DAT_003f1d50;
  iVar2 = DAT_003f1d40;
  fVar9 = DAT_003f1d3c;
  iVar8 = DAT_003f1d40 + 0xd4;
  if (*(char *)(param_1 + 0x3eb) == '\0') {
    iVar5 = FUN_0036a7a0(param_2);
    fVar3 = DAT_003f1d60;
    if (iVar5 == 0) {
      if ((((int)ABS(local_34) < DAT_003f1d58) && ((int)ABS(local_38) < DAT_003f1d58)) &&
         ((int)ABS(local_30) < DAT_003f1d5c)) {
        sVar1 = *(short *)(iVar7 + 0xbe) - *(short *)(param_1 + 0xbe);
        if (DAT_003f1d60 < local_30) {
          sVar1 = -0x8000 - sVar1;
        }
        if ((int)sVar1 + 0x2fffU <= DAT_003f1d64) {
          if (*(short *)(param_1 + 1000) != 0) {
            if (*(char *)((uint)*(ushort *)(iVar2 + 0x1592) + iVar8) < '\x01') {
              *(short *)(*(int *)(param_2 + 0x20ac) + 0x1728) = (short)DAT_003f1d68;
              return;
            }
            *(undefined2 *)(DAT_003f1d6c + iVar7) = 0xf;
          }
          if (uVar4 == 4) {
            uVar6 = 0xff;
          }
          else {
            uVar6 = 1;
          }
          *(undefined1 *)(iVar7 + 0x12a4) = uVar6;
          if (local_30 < fVar3) {
            fVar9 = DAT_003f1d70;
          }
          *(char *)(iVar7 + 0x12a5) = (char)(int)fVar9;
          *(int *)(iVar7 + 0x12a8) = param_1;
          return;
        }
      }
      else if (uVar4 == 4) {
        if (DAT_003f1d74 < *(int *)(param_1 + 0x98)) {
          *(undefined4 *)(param_1 + 0x3e4) = DAT_003f1d78;
        }
        return;
      }
    }
  }
  else {
    *(undefined4 *)(param_1 + 0x3e4) = DAT_003f1d44;
    if ((*(uint *)(DAT_003f1d48 + iVar7) & 0x8000000) != 0) {
      fVar9 = DAT_003f1d4c;
    }
    FUN_0037422c(fVar9,param_1 + 0x1a4,
                 *(undefined1 *)
                  ((uint)*(byte *)(param_1 + 0x3ea) + iVar5 + *(char *)(param_1 + 0x3ee) * 4));
    if (*(short *)(param_1 + 1000) != 0) {
      uVar4 = (uint)*(ushort *)(iVar2 + 0x1592);
      *(char *)(uVar4 + iVar8) = *(char *)(uVar4 + iVar8) + -1;
      FUN_00375c10(param_2,*(ushort *)(param_1 + 0x1c) & 0x3f);
      FUN_00375bcc(param_1,DAT_003f1d54);
    }
  }
  return;
}
