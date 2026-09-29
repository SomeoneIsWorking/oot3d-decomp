// OoT3D decomp @ 003eee7c  name=FUN_003eee7c  size=636

void FUN_003eee7c(int param_1,int param_2)

{
  char cVar1;
  undefined1 uVar2;
  int iVar3;
  undefined2 uVar4;
  int iVar5;
  float fVar6;

  if (((*(char *)(param_1 + 0x1c6) == '\0') ||
      (cVar1 = *(char *)(param_1 + 0x1c6) + -1, *(char *)(param_1 + 0x1c6) = cVar1, cVar1 == '\0'))
     && (fVar6 = DAT_003ef0fc, *(char *)(DAT_003ef0f8 + param_2) == '\0')) {
    if (*(char *)(param_1 + 0x1c4) == '\x03') {
      if ((*(short *)(param_1 + 0x1be) == 100) &&
         (FUN_00375bcc(param_1,DAT_003ef118), *(char *)(param_1 + 2) == '\n')) {
        iVar5 = *(int *)(param_2 + 0x20ac);
        uVar2 = *(undefined1 *)(param_1 + 0x1c4);
        uVar4 = 0xf;
        iVar3 = FUN_0036c2e8(param_1,param_2);
        if (iVar3 != 0) {
          uVar4 = 0x20;
        }
        *(undefined4 *)(param_1 + 0x1d0) = DAT_003ef104;
        *(undefined2 *)(param_1 + 0x1c8) = 0;
        iVar3 = DAT_003ef108;
        *(undefined1 *)(param_1 + 0x1c4) = uVar2;
        *(float *)(param_1 + 0x1cc) = fVar6;
        FUN_00336434(*(undefined4 *)(param_2 + 0xa54),param_1,(int)*(short *)(iVar3 + iVar5),0xc,
                     uVar4,10);
      }
      iVar3 = FUN_00372aa8(param_1 + 0x1be,1,10);
    }
    else {
      if ((*(float *)(param_1 + 100) == DAT_003ef0fc) &&
         (FUN_00375bcc(param_1,DAT_003ef100), *(char *)(param_1 + 2) == '\n')) {
        iVar5 = *(int *)(param_2 + 0x20ac);
        uVar2 = *(undefined1 *)(param_1 + 0x1c4);
        uVar4 = 0xf;
        iVar3 = FUN_0036c2e8(param_1,param_2);
        if (iVar3 != 0) {
          uVar4 = 0x20;
        }
        *(undefined4 *)(param_1 + 0x1d0) = DAT_003ef104;
        *(undefined2 *)(param_1 + 0x1c8) = 0;
        iVar3 = DAT_003ef108;
        *(undefined1 *)(param_1 + 0x1c4) = uVar2;
        *(float *)(param_1 + 0x1cc) = fVar6;
        FUN_00336434(*(undefined4 *)(param_2 + 0xa54),param_1,(int)*(short *)(iVar3 + iVar5),0xc,
                     uVar4,10);
      }
      FUN_003705a0(DAT_003ef110,DAT_003ef10c,param_1 + 100);
      iVar3 = FUN_003705a0(*(float *)(param_1 + 0xc) + DAT_003ef114,*(undefined4 *)(param_1 + 100),
                           param_1 + 0x2c);
    }
    if (iVar3 != 0) {
      fVar6 = DAT_003ef11c;
      if (*(char *)(param_1 + 0x1c2) == '\x05') {
        fVar6 = DAT_003ef120;
      }
      if (fVar6 < *(float *)(param_1 + 0x98)) {
        iVar3 = FUN_0036c2e8(param_1,param_2);
        if (iVar3 != 0) {
          *(undefined4 *)(param_1 + 100) = DAT_003ef124;
        }
        *(undefined4 *)(param_1 + 0x21c) = 0;
        if (*(char *)(param_1 + 0x1c4) == '\x03') {
          FUN_00375bcc(param_1,DAT_003ef130);
          if ((*(char *)(param_1 + 0x1c2) == '\x02' || *(char *)(param_1 + 0x1c2) == '\a') &&
             (iVar3 = FUN_0036e864(param_2,*(ushort *)(param_1 + 0x1c) & 0x3f), iVar3 == 0)) {
            FUN_00375bcc(param_1,DAT_003ef134);
          }
          *(undefined4 *)(param_1 + 0x1d0) = DAT_003ef138;
          *(undefined2 *)(param_1 + 0x1c8) = 0;
          return;
        }
        FUN_00375bcc(param_1,DAT_003ef128);
        *(undefined4 *)(param_1 + 0x1d0) = DAT_003ef12c;
        *(undefined2 *)(param_1 + 0x1c8) = 0;
      }
    }
  }
  return;
}
