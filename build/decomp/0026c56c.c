// OoT3D decomp @ 0026c56c  name=FUN_0026c56c  size=448

void FUN_0026c56c(int param_1,undefined4 param_2,int param_3)

{
  short sVar1;
  float fVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float local_2c;
  float local_28;
  float local_24;

  uVar4 = DAT_0026c738;
  uVar3 = DAT_0026c734;
  fVar2 = DAT_0026c72c;
  local_2c = DAT_0026c72c;
  local_28 = DAT_0026c72c;
  local_24 = DAT_0026c72c;
  iVar5 = *(int *)(param_1 + 0x124);
  iVar6 = 0;
  if (iVar5 != 0) {
    iVar6 = *(int *)(iVar5 + 0x13c);
  }
  if (iVar5 != 0 && iVar6 != 0) {
    sVar1 = *(short *)(param_3 + 0x7a);
    if (sVar1 == 0) {
      fVar7 = (float)FUN_0036e168(*(undefined4 *)(param_3 + 0x3c),DAT_0026c738,DAT_0026c734,
                                  param_3 + 0x30);
      fVar8 = (float)FUN_0036e168(*(undefined4 *)(param_3 + 0x40),uVar4,uVar3,fVar2,param_3 + 0x34);
      fVar9 = (float)FUN_0036e168(*(undefined4 *)(param_3 + 0x44),uVar4,uVar3,fVar2,param_3 + 0x38);
      fVar10 = (float)FUN_0036e168(fVar2,uVar4,DAT_0026c73c,fVar2,param_3 + 0x74);
      fVar10 = fVar10 + fVar9 + fVar8 + fVar7;
      if (fVar10 < fVar2) {
        fVar10 = -fVar10;
      }
      if (fVar10 == fVar2) {
        *(short *)(*(int *)(param_1 + 0x124) + 0x14) =
             *(short *)(*(int *)(param_1 + 0x124) + 0x14) + -1;
        uVar3 = DAT_0026c740;
        *(short *)(param_3 + 0x7a) = *(short *)(param_3 + 0x7a) + -1;
        FUN_00375bcc(param_1,uVar3);
      }
    }
    else if (0 < sVar1) {
      *(short *)(param_3 + 0x7a) = sVar1 + -1;
    }
    if (*(char *)(*(int *)(param_1 + 0x124) + 0xb7) != '\0') {
      *(undefined2 *)(param_3 + 0x78) = 5;
    }
    return;
  }
  FUN_003642f4(param_2,param_3 + 0x30,&local_2c,&local_2c,
               (int)(short)((short)(int)(*(float *)(param_1 + 0x58) * DAT_0026c730) * 0x28),7,0xff,
               0xff,0xff,0xff,0,0xff,0,1,0xb,1);
  *(undefined2 *)(param_3 + 0x78) = 5;
  return;
}
