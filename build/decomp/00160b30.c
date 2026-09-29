// OoT3D decomp @ 00160b30  name=FUN_00160b30  size=808

void FUN_00160b30(int param_1,int param_2)

{
  byte bVar1;
  char cVar2;
  short sVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  bool bVar9;

  *(short *)(param_1 + 0x1a8) = *(short *)(param_1 + 0x1a8) + 1;
  *(short *)(param_1 + 0x1aa) = *(short *)(param_1 + 0x1aa) + 1;
  sVar3 = *(short *)(param_1 + 0x1ae) + 1;
  *(short *)(param_1 + 0x1ae) = sVar3;
  if (0x1d < sVar3) {
    *(undefined2 *)(param_1 + 0x1ae) = 0;
  }
  iVar4 = param_1 + *(short *)(param_1 + 0x1ae) * 0xc;
  uVar7 = *(undefined4 *)(param_1 + 0x2c);
  uVar8 = *(undefined4 *)(param_1 + 0x30);
  *(undefined4 *)(iVar4 + 0x240) = *(undefined4 *)(param_1 + 0x28);
  *(undefined4 *)(iVar4 + 0x244) = uVar7;
  *(undefined4 *)(iVar4 + 0x248) = uVar8;
  (**(code **)(param_1 + 0x1a4))(param_1,param_2);
  iVar4 = 0;
  do {
    iVar6 = param_1 + iVar4 * 2;
    sVar3 = *(short *)(iVar6 + 0x1d0);
    iVar4 = (int)(short)((short)iVar4 + 1);
    if (sVar3 != 0) {
      *(short *)(iVar6 + 0x1d0) = sVar3 + -1;
    }
  } while (iVar4 < 5);
  if (*(short *)(param_1 + 0x1b2) != 0) {
    *(short *)(param_1 + 0x1b2) = *(short *)(param_1 + 0x1b2) + -1;
  }
  if (*(short *)(param_1 + 0x1c0) != 0) {
    *(short *)(param_1 + 0x1c0) = *(short *)(param_1 + 0x1c0) + -1;
  }
  *(undefined4 *)(param_1 + 0x3c) = *(undefined4 *)(param_1 + 0x28);
  *(undefined4 *)(param_1 + 0x40) = *(undefined4 *)(param_1 + 0x2c);
  *(undefined4 *)(param_1 + 0x44) = *(undefined4 *)(param_1 + 0x30);
  FUN_0037632c(param_1,param_1 + 0x780);
  if ((*(char *)(param_1 + 0x5bd) != '\0') && (*(short *)(param_1 + 0x1b2) == 0)) {
    iVar4 = *(int *)(DAT_00160e58 + param_2);
    bVar9 = false;
    if ((*(short *)(param_1 + 0x498) == 1) && ((*(byte *)(param_1 + 0x791) & 2) != 0)) {
      *(byte *)(param_1 + 0x791) = *(byte *)(param_1 + 0x791) & 0xfd;
      *(byte *)(param_1 + 0x790) = *(byte *)(param_1 + 0x790) & 0xfd;
      if ((**(uint **)(param_1 + 0x7bc) & 0x100000) != 0) {
        *(undefined2 *)(param_1 + 0x1b2) = 0xb;
        *(undefined4 *)(param_2 + 0x3258) = DAT_00160e5c;
        iVar5 = FUN_00351388(param_2);
        iVar6 = DAT_00160e64;
        uVar7 = DAT_00160e60;
        if (iVar5 == 0) {
          FUN_0035123c(DAT_00160e60,param_2,(int)*(short *)(DAT_00160e68 + param_1));
          *(undefined2 *)(param_1 + 0x498) = 2;
          *(undefined2 *)(param_1 + 0x1d0) = 0x1e;
          uVar8 = DAT_00160e70;
          uVar7 = DAT_00160e6c;
          *(undefined1 *)(iVar6 + 2) = 0;
          *(undefined1 *)(iVar6 + 4) = 0;
          *(undefined1 *)(iVar6 + 5) = 0;
          FUN_0037547c(DAT_00160e74,0,4,uVar8,uVar8,uVar7);
        }
        else {
          if (*(short *)(param_1 + 0x5be) == 1) {
            if (*(char *)(DAT_00160e64 + 5) == '\0') {
              FUN_003510f0(param_2,1);
              cVar2 = *(char *)(iVar6 + 4) + '\x01';
              *(char *)(iVar6 + 4) = cVar2;
              *(char *)(iVar6 + 0xb) = cVar2 * '\x02' + '\b';
              *(undefined2 *)(iVar6 + 0x14) = 0xfff9;
            }
            else {
              *(undefined1 *)(DAT_00160e64 + 5) = 0;
              FUN_0035123c(uVar7,param_2,1);
            }
          }
          else if (*(char *)(DAT_00160e64 + 4) == '\0') {
            FUN_003510f0(param_2,0);
            cVar2 = *(char *)(iVar6 + 5) + '\x01';
            *(char *)(iVar6 + 5) = cVar2;
            *(char *)(iVar6 + 0xb) = cVar2 * '\x02' + '\b';
            *(undefined2 *)(iVar6 + 0x14) = 0xfff9;
          }
          else {
            *(undefined1 *)(DAT_00160e64 + 4) = 0;
            FUN_0035123c(uVar7,param_2,0);
          }
          bVar1 = *(byte *)(iVar6 + 5);
          bVar9 = bVar1 < 3;
          if (bVar9) {
            bVar1 = *(byte *)(iVar6 + 4);
          }
          if (bVar9 && bVar1 < 3) {
            *(undefined2 *)(param_1 + 0x498) = 2;
            *(undefined2 *)(param_1 + 0x1d0) = 0x1e;
            *(undefined1 *)(iVar6 + 2) = 0;
          }
          else {
            *(undefined2 *)(param_1 + 0x1d0) = 0x78;
            *(undefined2 *)(param_1 + 0x498) = 10;
            FUN_003624c8(iVar4 + 0x243c,param_1 + 0x57c,0);
            *(short *)(param_1 + 0x57e) = *(short *)(param_1 + 0x57e) + -0x8000;
            *(short *)(param_1 + 0x57c) = -*(short *)(param_1 + 0x57c);
            *(undefined1 *)(iVar6 + 0xb) = 8;
          }
        }
        bVar9 = true;
      }
    }
    if (!bVar9) {
      FUN_00376168(param_2,param_2 + 0x5c78,param_1 + 0x780);
      FUN_003761f0(param_2,param_2 + 0x5c78,param_1 + 0x780);
    }
  }
  *(undefined1 *)(param_1 + 0x5bd) = 0;
  return;
}
