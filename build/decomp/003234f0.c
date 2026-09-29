// OoT3D decomp @ 003234f0  name=FUN_003234f0  size=400

void FUN_003234f0(int param_1,int param_2)

{
  float fVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined4 local_40;
  float local_3c;
  undefined4 uStack_38;

  *(byte *)(param_1 + 0x69d) = *(byte *)(param_1 + 0x69d) & 0xfd;
  if ((*(uint *)(param_2 + 0x5bf4) & 0xf) == 0) {
    local_40 = *(undefined4 *)(param_1 + 0x28);
    uStack_38 = *(undefined4 *)(param_1 + 0x30);
    local_3c = *(float *)(param_1 + 0x2c) + DAT_00323680;
    FUN_00374444(param_2,param_1,&local_40,0x40);
    FUN_00374444(param_2,param_1,&local_40,0x40);
    FUN_00374444(param_2,param_1,&local_40,0x40);
    uVar4 = 0x168;
  }
  else {
    *(byte *)(param_1 + 0x69d) = *(byte *)(param_1 + 0x69d) & 0xfd;
    uVar3 = DAT_00323690;
    uVar2 = DAT_0032368c;
    fVar1 = DAT_00323688;
    uVar4 = DAT_00323684;
    iVar6 = 3 - *(short *)(param_1 + 0x686);
    if (0 < iVar6) {
      do {
        fVar7 = (float)FUN_003738a8(uVar4);
        fVar10 = *(float *)(param_1 + 0x30);
        fVar8 = (float)FUN_003738a8(uVar4);
        fVar11 = *(float *)(param_1 + 0x2c);
        fVar9 = (float)FUN_003738a8(uVar4);
        local_40 = 0;
        local_3c = 1.4013e-45;
        iVar5 = FUN_0036aa20(fVar9 + *(float *)(param_1 + 0x28),fVar8 + fVar1 + fVar11,
                             fVar7 + fVar10,param_2 + 0x208c,param_1,param_2,0x1d,0,0);
        if (iVar5 != 0) {
          *(undefined4 *)(iVar5 + 100) = uVar2;
          fVar7 = (float)FUN_003738a8(uVar3);
          *(short *)(iVar5 + 0x36) = (short)(int)fVar7;
          *(short *)(iVar5 + 0xbe) = (short)(int)fVar7;
          *(short *)(param_1 + 0x686) = *(short *)(param_1 + 0x686) + 1;
        }
        iVar6 = iVar6 + -1;
      } while (0 < iVar6);
    }
    uVar4 = 0xc;
  }
  *(undefined4 *)(param_1 + 0x660) = uVar4;
  FUN_00375bcc(param_1,DAT_00323694);
  return;
}
