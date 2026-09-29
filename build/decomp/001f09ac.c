// OoT3D decomp @ 001f09ac  name=FUN_001f09ac  size=696

void FUN_001f09ac(int param_1,int param_2)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int iVar8;
  uint uVar9;
  float fVar10;
  float local_84;
  float local_80;
  float local_7c;
  undefined4 local_78;
  float local_74;
  float local_70;
  float local_6c;
  undefined4 local_68;
  float local_64;
  float local_60;
  float local_5c;
  undefined4 local_58;

  uVar7 = DAT_001f0d48;
  uVar6 = DAT_001f0d38;
  uVar5 = DAT_001f0d28;
  uVar4 = DAT_001f0d24;
  uVar3 = DAT_001f0d20;
  uVar2 = DAT_001f0d1c;
  uVar9 = 0;
  do {
    iVar8 = param_1 + uVar9 * 0x34;
    cVar1 = *(char *)(iVar8 + 0x498);
    if (cVar1 == '\0') {
      param_1 = param_1 + uVar9 * 0x34;
      if ((uVar9 & 1) == 0) {
        *(undefined4 *)(param_1 + 0x468) = uVar2;
        *(undefined4 *)(param_1 + 0x46c) = uVar3;
        *(undefined4 *)(param_1 + 0x470) = uVar4;
        *(undefined4 *)(param_1 + 0x474) = uVar2;
        *(undefined4 *)(param_1 + 0x478) = uVar3;
        *(undefined4 *)(param_1 + 0x47c) = uVar5;
                    /* WARNING: Subroutine does not return */
        FUN_003759d0();
      }
      *(undefined4 *)(param_1 + 0x468) = uVar6;
      *(undefined4 *)(param_1 + 0x46c) = uVar3;
      *(undefined4 *)(param_1 + 0x470) = uVar4;
      *(undefined4 *)(param_1 + 0x474) = uVar6;
      *(undefined4 *)(param_1 + 0x478) = uVar3;
      *(undefined4 *)(param_1 + 0x47c) = uVar5;
                    /* WARNING: Subroutine does not return */
      FUN_003759d0();
    }
    if (cVar1 == '\x01') {
      FUN_0036e168(uVar7,uVar7,*(undefined4 *)(iVar8 + 0x48c),*(undefined4 *)(iVar8 + 0x48c),
                   iVar8 + 0x494);
      fVar10 = *(float *)(iVar8 + 0x494);
      *(float *)(iVar8 + 0x480) =
           *(float *)(iVar8 + 0x468) +
           (*(float *)(iVar8 + 0x474) - *(float *)(iVar8 + 0x468)) * fVar10;
      *(float *)(iVar8 + 0x484) =
           *(float *)(iVar8 + 0x46c) +
           (*(float *)(iVar8 + 0x478) - *(float *)(iVar8 + 0x46c)) * fVar10;
      *(float *)(iVar8 + 0x488) =
           *(float *)(iVar8 + 0x470) +
           (*(float *)(iVar8 + 0x47c) - *(float *)(iVar8 + 0x470)) * fVar10;
      if (0x3f7fffff < (int)fVar10) {
        *(char *)(iVar8 + 0x498) = *(char *)(iVar8 + 0x498) + '\x01';
      }
    }
    else if (cVar1 == '\x02') {
      param_1 = param_1 + uVar9 * 0x34;
      if ((uVar9 & 1) == 0) {
        *(undefined4 *)(param_1 + 0x468) = uVar2;
        *(undefined4 *)(param_1 + 0x46c) = uVar3;
        *(undefined4 *)(param_1 + 0x470) = uVar4;
        *(undefined4 *)(param_1 + 0x474) = uVar2;
        *(undefined4 *)(param_1 + 0x478) = uVar3;
        *(undefined4 *)(param_1 + 0x47c) = uVar5;
                    /* WARNING: Subroutine does not return */
        FUN_003759d0();
      }
      *(undefined4 *)(param_1 + 0x468) = uVar6;
      *(undefined4 *)(param_1 + 0x46c) = uVar3;
      *(undefined4 *)(param_1 + 0x470) = uVar4;
      *(undefined4 *)(param_1 + 0x474) = uVar6;
      *(undefined4 *)(param_1 + 0x478) = uVar3;
      *(undefined4 *)(param_1 + 0x47c) = uVar5;
                    /* WARNING: Subroutine does not return */
      FUN_003759d0();
    }
    local_78 = *(undefined4 *)(iVar8 + 0x480);
    local_68 = *(undefined4 *)(iVar8 + 0x484);
    local_58 = *(undefined4 *)(iVar8 + 0x488);
    local_7c = 0.0;
    local_80 = 0.0;
    local_84 = 1.0;
    local_74 = 0.0;
    local_70 = 1.0;
    local_60 = 0.0;
    local_5c = 1.0;
    local_6c = 0.0;
    local_64 = 0.0;
    FUN_0036c174(&local_84,&local_84,param_2 + 0x2fc);
    fVar10 = *(float *)(iVar8 + 0x490);
    iVar8 = param_1 + uVar9 * 4;
    local_84 = local_84 * fVar10;
    local_74 = local_74 * fVar10;
    local_64 = local_64 * fVar10;
    local_80 = local_80 * fVar10;
    local_70 = local_70 * fVar10;
    local_60 = local_60 * fVar10;
    local_7c = local_7c * fVar10;
    local_6c = local_6c * fVar10;
    local_5c = local_5c * fVar10;
    *(undefined1 *)(*(int *)(iVar8 + 0x23c) + 0xac) = 1;
    FUN_003721e0(*(undefined4 *)(iVar8 + 0x23c),&local_84);
    FUN_00372170(*(undefined4 *)(iVar8 + 0x23c),0);
    uVar9 = (uint)(short)((short)uVar9 + 1);
    if (0x13 < (int)uVar9) {
      return;
    }
  } while( true );
}
