// OoT3D decomp @ 002414f8  name=FUN_002414f8  size=384

void FUN_002414f8(int param_1,int param_2)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  float fVar6;
  float fVar7;

  iVar5 = *(int *)(param_1 + 0x124);
  *(short *)(param_1 + 0x1cc) = *(short *)(param_1 + 0x1cc) + 1;
  iVar4 = FUN_0036cf6c(param_2,(int)*(char *)(DAT_0024189c + param_2));
  fVar7 = DAT_002418a0;
  if (iVar4 == 0) {
    cVar1 = *(char *)(iVar5 + 0x93e);
    if (cVar1 == '\x01') {
      FUN_0036e168(DAT_002418b0,DAT_002418ac,DAT_002418a8,DAT_002418a4,param_1 + 0x2c);
      fVar6 = (float)FUN_00338f60((int)(short)(*(short *)(param_1 + 0x1cc) << 0xf));
      *(float *)(param_1 + 0x30) = *(float *)(param_1 + 0x30) + fVar6 * fVar7;
      fVar7 = (float)FUN_002cfca0((int)(short)(*(short *)(param_1 + 0x1cc) * 0x7000));
      *(short *)(param_1 + 0xbc) = (short)(int)fVar7 * 0x37;
      fVar7 = (float)FUN_002cfca0((int)(short)(*(short *)(param_1 + 0x1cc) * 0x5000));
      uVar3 = DAT_002418b8;
      uVar2 = DAT_002418b4;
      *(short *)(param_1 + 0xc0) = (short)(int)fVar7 * 0x37;
      FUN_0037547c(DAT_002418bc,0,4,uVar3,uVar3,uVar2);
    }
    else if (cVar1 == '\x02') {
      FUN_00374428(param_1);
    }
    if (*(char *)(iVar5 + 0x93e) != '\0') {
                    /* WARNING: Subroutine does not return */
      FUN_003759d0();
    }
  }
  return;
}
