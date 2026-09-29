// OoT3D decomp @ 002659fc  name=FUN_002659fc  size=656

void FUN_002659fc(int param_1,int param_2)

{
  short sVar1;
  short sVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  float fVar6;

  sVar1 = *(short *)(param_1 + 0x36);
  sVar2 = *(short *)(param_1 + 0x82);
  FUN_003731e0(param_1 + 0x1a4);
  if ((*(ushort *)(param_1 + 0x90) & 8) != 0) {
    if (0x8000 < (int)(short)(sVar1 - sVar2) + 0x4000U) {
      *(short *)(param_1 + 0x36) =
           (*(short *)(param_1 + 0x82) * 2 - *(short *)(param_1 + 0x36)) + -0x8000;
    }
    *(ushort *)(param_1 + 0x90) = *(ushort *)(param_1 + 0x90) & 0xfff7;
  }
  uVar3 = DAT_00265d7c;
  if ((*(ushort *)(param_1 + 0x90) & 3) != 0) {
    if ((*(short *)(param_1 + 0x1c) == -2) &&
       (iVar5 = FUN_0035ea34(param_2 + 0xa98,*(undefined4 *)(param_1 + 0x7c),
                             *(undefined1 *)(param_1 + 0x81)),
       (iVar5 == 2 || iVar5 == 3) || iVar5 == 9)) {
      *(undefined4 *)(param_1 + 0x530) = 2;
      *(undefined4 *)(param_1 + 0x534) = 0xf;
      *(short *)(param_1 + 0x53c) = *(short *)(param_1 + 0x53c) + 1;
      *(undefined4 *)(param_1 + 0x524) = 7;
      uVar3 = DAT_00265d80;
      *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) & 0xfffffffe;
      *(undefined4 *)(param_1 + 0x52c) = uVar3;
      return;
    }
    FUN_00375bcc(param_1,DAT_00265d84);
    uVar4 = DAT_00265d94;
    fVar6 = DAT_00265d8c;
    if ((uint)DAT_00265d88 < (uint)*(float *)(param_1 + 100)) {
      fVar6 = *(float *)(param_1 + 100) * DAT_00265d90;
    }
    *(float *)(param_1 + 100) = fVar6;
    *(ushort *)(param_1 + 0x90) = *(ushort *)(param_1 + 0x90) & 0xfffe;
    FUN_0036f00c(uVar3,uVar4,param_2,param_1,param_1 + 0x28,2,0,0,0);
    FUN_00375a18(param_1 + 0x36,(int)-*(short *)(param_1 + 0x92),1,DAT_00265d98,0);
  }
  *(undefined2 *)(param_1 + 0xbe) = *(undefined2 *)(param_1 + 0x36);
  if ((int)*(float *)(param_1 + 0x1e0) == 5) {
    FUN_00375bcc(param_1,DAT_00265d9c);
  }
  if (*(int *)(param_1 + 0x534) == 0) {
    FUN_00375bcc(param_1,DAT_00265da0);
    uVar3 = DAT_00265da4;
    sVar1 = *(short *)(param_1 + 0x1c);
    if (sVar1 == -3) {
      *(undefined4 *)(param_1 + 100) = DAT_00265da4;
      *(undefined4 *)(param_1 + 0x70) = uVar3;
      FUN_0036e734(param_1 + 0x1a4,0);
      *(undefined4 *)(param_1 + 0x6c) = uVar3;
      *(undefined4 *)(param_1 + 0x524) = 8;
      *(float *)(param_1 + 0x2c) = *(float *)(param_1 + 0x2c) + DAT_00265dbc;
      uVar3 = DAT_00265dc0;
      *(undefined1 *)(param_1 + 0x571) = 0;
      *(undefined4 *)(param_1 + 0x560) = uVar3;
                    /* WARNING: Subroutine does not return */
      FUN_003759d0();
    }
    if (sVar1 == -2) {
      if (*(int *)(param_1 + 100) == 0x41200000) {
        FUN_002b1028(param_2,param_1);
        FUN_00330544(param_2,param_1,1);
        return;
      }
    }
    else if (sVar1 == -1) {
      *(undefined4 *)(param_1 + 100) = DAT_00265da4;
      *(undefined4 *)(param_1 + 0x70) = uVar3;
      FUN_0036e734(param_1 + 0x1a4,0);
                    /* WARNING: Subroutine does not return */
      FUN_003759d0();
    }
  }
  else {
    *(int *)(param_1 + 0x534) = *(int *)(param_1 + 0x534) + -1;
  }
  return;
}
