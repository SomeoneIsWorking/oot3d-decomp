// OoT3D decomp @ 002478a4  name=FUN_002478a4  size=320

void FUN_002478a4(int param_1)

{
  undefined2 uVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  undefined4 uVar7;
  undefined4 uVar8;

  uVar7 = DAT_002479f0;
  fVar3 = DAT_002479ec;
  fVar2 = DAT_002479e8;
  if (*(short *)(param_1 + 0x1c) == 0xb) {
    iVar4 = *(int *)(param_1 + 0x124);
    if (iVar4 == 0) {
      *(undefined4 *)(param_1 + 0x524) = 1;
      *(undefined4 *)(param_1 + 0x52c) = DAT_002479e4;
      return;
    }
    goto LAB_002479d4;
  }
  if (*(int *)(param_1 + 0x534) == 0) {
    if (*(float *)(*(int *)(param_1 + 0x604) + 0x55c) == DAT_002479e8) {
      uVar5 = (uint)*(byte *)(param_1 + 0x573);
      if (uVar5 == 0) {
        *(undefined4 *)(param_1 + 0x140) = 0;
        *(undefined4 *)(param_1 + 0x13c) = 0;
        *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) & 0xfffffffe;
        return;
      }
      if (uVar5 < 0x15) {
        uVar5 = 0;
      }
      else {
        uVar5 = uVar5 - 0x14;
      }
LAB_00247994:
      *(char *)(param_1 + 0x573) = (char)uVar5;
    }
    else {
      FUN_0036e168(*(float *)(param_1 + 0x58),DAT_002479f0,*(float *)(param_1 + 0x58) * DAT_002479ec
                   ,DAT_002479e8,param_1 + 0x55c);
      FUN_0036e168(*(float *)(param_1 + 0x5c),uVar7,*(float *)(param_1 + 0x5c) * fVar3,fVar2,
                   param_1 + 0x560);
      uVar5 = (uint)*(short *)(DAT_002479f4 + param_1);
      if ((*(byte *)(param_1 + 0x573) != uVar5) &&
         (uVar6 = *(byte *)(param_1 + 0x573) + 10, *(char *)(param_1 + 0x573) = (char)uVar6,
         (int)uVar5 < (int)(uVar6 & 0xff))) goto LAB_00247994;
    }
    iVar4 = *(int *)(param_1 + 0x124);
    uVar7 = *(undefined4 *)(iVar4 + 0x10c);
    uVar8 = *(undefined4 *)(iVar4 + 0x110);
    *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(iVar4 + 0x108);
    *(undefined4 *)(param_1 + 0x2c) = uVar7;
    *(undefined4 *)(param_1 + 0x30) = uVar8;
  }
  else {
    *(int *)(param_1 + 0x534) = *(int *)(param_1 + 0x534) + -1;
    uVar1 = *(undefined2 *)(*(int *)(param_1 + 0x124) + 0x36);
    *(undefined2 *)(param_1 + 0x36) = uVar1;
    *(undefined2 *)(param_1 + 0xbe) = uVar1;
  }
  iVar4 = *(int *)(param_1 + 0x124);
  if (iVar4 == 0) {
    return;
  }
LAB_002479d4:
  *(undefined4 *)(param_1 + 100) = *(undefined4 *)(iVar4 + 100);
  return;
}
