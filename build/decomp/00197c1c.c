// OoT3D decomp @ 00197c1c  name=FUN_00197c1c  size=824

void FUN_00197c1c(int param_1,int param_2)

{
  char cVar1;
  char cVar2;
  byte bVar3;
  short sVar4;
  float fVar5;
  int iVar6;

  fVar5 = DAT_00197f20;
  if (*(float *)(param_1 + 0x1a8) == DAT_00197f20) {
    return;
  }
  *(uint *)(*(int *)(DAT_00197f1c + param_2) + 0x1714) =
       *(uint *)(*(int *)(DAT_00197f1c + param_2) + 0x1714) & 0xffffffef;
  if (*(float *)(param_1 + 0x1a8) <= fVar5) goto LAB_00197fe8;
  sVar4 = *(short *)(param_1 + 0x1b0);
  cVar1 = *DAT_00197f24;
  cVar2 = DAT_00197f24[1];
  if (sVar4 == 0) {
    bVar3 = DAT_00197f24[*(short *)(param_1 + 0x1c)];
    if (bVar3 == 0xb) {
      FUN_0034678c(param_1,0xc);
    }
    else if (bVar3 < 0xc) {
      if (bVar3 == 3 || bVar3 == 4) {
        FUN_0034678c(param_1,5);
      }
      else if (bVar3 == 7) {
        if (cVar1 == '\b' || cVar2 == '\b') {
          FUN_0034678c(param_1,9);
        }
        else {
LAB_00197f94:
          FUN_0034678c(param_1,8);
        }
      }
    }
    else if (bVar3 == 0xe) {
      FUN_0034678c(param_1,0xf);
    }
    else if (bVar3 == 0x12 || bVar3 == 0x13) {
      FUN_0034678c(param_1,0x14);
    }
  }
  else if (sVar4 == -0x8000) {
    switch(DAT_00197f24[*(short *)(param_1 + 0x1c)]) {
    case '\x02':
    case '\x03':
switchD_00197d5c_caseD_2:
      FUN_0034678c(param_1,1);
      break;
    case '\a':
    case '\t':
      FUN_0034678c(param_1,6);
      break;
    case '\v':
      FUN_0034678c(param_1,10);
      break;
    case '\x0e':
    case '\x0f':
switchD_00197d5c_caseD_e:
      FUN_0034678c(param_1,0xd);
      break;
    case '\x11':
switchD_00197d5c_caseD_11:
      FUN_0034678c(param_1,0x10);
      break;
    case '\x12':
      if (cVar1 != '\x11' && cVar2 != '\x11') goto switchD_00197d5c_caseD_11;
    }
  }
  else if (sVar4 == 0x4000) {
    switch(DAT_00197f24[*(short *)(param_1 + 0x1c)]) {
    case '\x06':
      goto switchD_00197d5c_caseD_e;
    case '\a':
      FUN_0034678c(param_1,0x11);
      break;
    case '\t':
      FUN_0034678c(param_1,0xb);
      break;
    case '\f':
      FUN_0034678c(param_1,0x15);
      break;
    case '\x0e':
      FUN_0034678c(param_1,0x12);
      break;
    case '\x0f':
      FUN_0034678c(param_1,0x13);
    }
  }
  else if (sVar4 == -0x4000) {
    switch(DAT_00197f24[*(short *)(param_1 + 0x1c)]) {
    case '\x06':
      FUN_0034678c(param_1,0);
      break;
    case '\a':
      goto switchD_00197d5c_caseD_2;
    case '\t':
    case '\v':
      FUN_0034678c(param_1,4);
      break;
    case '\x0e':
      FUN_0034678c(param_1,2);
      break;
    case '\x0f':
      if (cVar1 != '\b' && cVar2 != '\b') goto LAB_00197f94;
      FUN_0034678c(param_1,3);
    }
  }
  iVar6 = FUN_00363e64(param_1,param_1 + 0x1c0);
  if (0x3f800000 < iVar6) {
    FUN_0036e980(param_2,param_1,8);
    *(undefined4 *)(param_1 + 0x1bc) = DAT_00197ff4;
  }
LAB_00197fe8:
  *(float *)(param_1 + 0x1a8) = fVar5;
  return;
}
